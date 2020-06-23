#include "struct.h"
#include <unistd.h>
#include <stdarg.h>

void die(const char*);

int get_window_size(int*, int*);
void init_editor();
void draw_rows(struct abuf*);
int get_cursor_position(int*, int*);

void disable_raw_mode();
void enable_raw_mode();

int read_key();
void handle_key_press();

void refresh_screen();

void abAppend(struct abuf*, const char*, int);
void abFree(struct abuf*);

void move_cursor(int);

void editor_open(char*);
void append_row(char*, size_t);
void update_row(erow*);
int row_cx_to_rx(erow*, int);

void scroll();
void draw_status_bar(struct abuf*);
void set_status_msg(const char*, ...);