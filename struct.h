#include <termios.h>

struct config {
    int cx,cy;
    int screen_rows;
    int screen_cols;
    struct termios orig_termios;
};

struct abuf {
    char *b;
    int len;
};