


// error handle.
void die(const char*);

// reload keyboard shortcuts and functional keys at exit
void disable_raw_mode();

// disable all keyboard shortcuts and functional keys (CTRL + Q or ESC)
void enable_raw_mode();

// Read key event from user char by char
int read_key();

// helper method for finding window size
int get_cursor_position(int *, int *);

// get terminal window size to appropriately adjust editor layout
int get_window_size(int *, int *);