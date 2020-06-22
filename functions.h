#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <unistd.h>

void die(const char*);

int get_window_size(int*, int*);
void init_editor();
void draw_rows();
int getCursorPosition(int*, int*);

void disable_raw_mode();
void enable_raw_mode();

char read_key();
void handle_key_press();

void refresh_screen();