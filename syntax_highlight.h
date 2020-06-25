#include "struct.h"

#define HIGHLIGHT_NUMBERS (1<<0)
#define HIGHLIGHT_STRINGS (1<<1)

enum editor_highlight {
    NORMAL = 0,
    COMMENT,
    ML_COMMENT,
    KEYWORD1,
    KEYWORD2,
    STRING,
    NUMBER,
    MATCH
};

// seperator characters for our text editor, help to detect numbers etc.
int is_seperator(int);

// re-color the characters related to syntax in a single row.
void update_syntax(erow *);

// choose a color for syntax according to syntax type
int syntax_to_color(int);

// detect syntax type, highlight that char and update the syntax in a row.
void select_syntax_highlight();