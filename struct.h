#include <termios.h>
#include <time.h>

struct abuf {
    char *b;
    int len;
};

typedef struct erow {
    int idx;
    int size;
    int rsize;
    char* chars;
    char* render;
    unsigned char* hl;
    int open_comment;
}erow;

struct editor_syntax {
    char* filetype;
    char** filematch;
    char** keywords;
    char* singleline_comment_start;
    char *multiline_comment_start;
    char *multiline_comment_end;
    int flags;
};

struct config {
    int cx,cy;
    int rx;
    int dirty;
    int rowoff;
    int coloff;
    int screen_rows;
    int screen_cols;
    int numrows;
    erow* row;
    char* filename;
    char status_msg[100];
    time_t statusmsg_time;
    struct editor_syntax *syntax;
    struct termios orig_termios;
};

