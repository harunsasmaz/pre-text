#include "syntax_highlight.h"


int row_cx_to_rx(erow *, int);

int row_rx_to_cx(erow *, int);

// updates a row with the new chars[] and properties.
void update_row(erow *);

// insert a row to our editor with the given length of string
void insert_row(int, char *, size_t);

// inserts a char to a row
void insert_char_row(erow *, int, int);

// deletes a char with given index from a row.
void del_char_row(erow *, int);

// deallocates the pointers in the row.
void free_row(erow*);

// deletes a row with given row index.
void delete_row(int);

// when given a string, appends to the end of the row
void row_append_string(erow*, char*, size_t);

// allocates a space for a string in a row with given length.
char* row_to_string(int*);





