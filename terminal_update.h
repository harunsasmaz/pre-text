#define ABUF_INIT {NULL, 0}

// Adds the given string to the buffer
void abAppend(struct abuf *, const char *, int);

// Deallocates a buffer
void abFree(struct abuf *);

// Draws the rows with the contained data in the buffer
void draw_rows(struct abuf *);

// Draw the status bar below the screen
void draw_status_bar(struct abuf *);

// Draw the message bar like Help below the screen
void draw_message_bar(struct abuf *);

// Updates the editor screen after each key event.
void refresh_screen();

// Set the status_msg file in the editor_config struct to given inputs
void set_status_msg(const char *, ...);

// Prompts a given string according to the callback event.
char* prompt(char *prompt, void (*callback)(char *, int));