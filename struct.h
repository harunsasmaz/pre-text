#include <termios.h>

struct abuf {
    char *b;
    int len;
};

typedef struct erow{
    int size;
    char* chars;
}erow;

struct config {
    int cx,cy;
    int rowoff;
    int coloff;
    int screen_rows;
    int screen_cols;
    int numrows;
    erow* row;
    struct termios orig_termios;
};