#include <termios.h>
#include <time.h>

struct abuf {
    char *b;                // buffer
    int len;                // its size
};

typedef struct erow {
    int idx;                // ID of the row
    int size;               // Number of chars inserted
    int rsize;              // Size of the rendered row
    char* chars;            // Contained chars in the row
    char* render;           // Rendered chars in the row
    unsigned char* hl;      // Syntax highlight for each char 
    int open_comment;       // Open multiline comment check
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
    int cx,cy;                      // Cursor x and y
    int rx;                         // Row index
    int dirty;                      // Check for modificaation
    int rowoff;                     // Row offset
    int coloff;                     // Column offset
    int screen_rows;                // Total rows in the screen
    int screen_cols;                // Total cols in the screen
    int numrows;                    // Filled row count.
    erow* row;                      // Filled rows
    char* filename;                 // File name to open or save
    char status_msg[100];           // Status message displayed below the screen
    time_t statusmsg_time;          // When to display status message
    struct editor_syntax *syntax;   // Current syntax information of the editor
    struct termios orig_termios;    // Raw terminal handle struct.
};

