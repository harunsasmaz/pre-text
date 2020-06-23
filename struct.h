#include <termios.h>

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
    struct termios orig_termios;
};