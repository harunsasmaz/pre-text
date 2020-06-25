#include "syntax_highlight.h"

int row_cx_to_rx(erow *, int);

int row_rx_to_cx(erow *, int);

void update_row(erow *);

void insert_row(int, char *, size_t);

void insert_char_row(erow *, int, int);

void del_char_row(erow *, int);

void free_row(erow*);

void delete_row(int);

void row_append_string(erow*, char*, size_t);

char* row_to_string(int*);





