#include <termios.h>
#include <time.h>

struct abuf {
    char *b;
    int len;
};

typedef struct erow{
    int size;
    int rsize;
    char* chars;
    char* render;
}erow;

struct config {
    int cx,cy;
    int rx;
    int rowoff;
    int coloff;
    int screen_rows;
    int screen_cols;
    int numrows;
    erow* row;
    char* filename;
    char* status_msg;
    time_t statusmsg_time;
    struct termios orig_termios;
};