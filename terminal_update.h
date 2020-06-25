#define ABUF_INIT {NULL, 0}

void abAppend(struct abuf *, const char *, int);

void abFree(struct abuf *);

void draw_rows(struct abuf *);

void draw_status_bar(struct abuf *);

void draw_message_bar(struct abuf *);

void refresh_screen();

void set_status_msg(const char *, ...);

char* prompt(char *prompt, void (*callback)(char *, int));