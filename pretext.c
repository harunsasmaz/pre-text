#include <unistd.h>
#include <termios.h>
#include <errno.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

struct termios orig_termios;

void die(const char* s)
{
    perror(s);
    exit(0);
}

void disable_raw_mode()
{
    if(tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig_termios) == -1)
        die("disable raw mode: tcsetattr");
}

void enable_raw_mode()
{
    if(tcgetattr(STDIN_FILENO, &orig_termios) == -1)
        die("enable raw mode: tcgetattr");
    
    atexit(disable_raw_mode);
    
    struct termios raw;
    raw.c_iflag &= ~(BRKINT | ICRNL | INPCK | ISTRIP | IXON);
    raw.c_iflag &= ~(OPOST);
    raw.c_iflag |= (CS8);
    raw.c_lflag &= ~(ECHO | ICANON | IEXTEN | ISIG);
    raw.c_cc[VMIN] = 0;
    raw.c_cc[VTIME] = 1;

    if (tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw) == -1) 
        die("enable raw mode: tcsetattr");

}

int main()
{   
    enable_raw_mode();

    char c;
    while(1)
    {
        c = '\0';
        if(read(STDIN_FILENO, &c, 1) == -1 && errno != EAGAIN) die("main: read");
        if (iscntrl(c)) 
            printf("%d\r\n", c);
        else
            printf("%d ('%c')\r\n", c, c);
        
        if(c == 'q') break;
    }
    return 0;
}