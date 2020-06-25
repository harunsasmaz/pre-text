#include "struct.h"

#define HIGHLIGHT_NUMBERS (1<<0)
#define HIGHLIGHT_STRINGS (1<<1)

int is_seperator(int);

void update_syntax(erow *);

int syntax_to_color(int);

void select_syntax_highlight();