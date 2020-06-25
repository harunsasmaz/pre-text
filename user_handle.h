#define PRETEXT_VERSION "0.0.1"
#define TAB_STOP 8
#define QUIT_TIMES 3
#define CTRL_KEY(k) ((k) & 0x1f)

void scroll();

void move_cursor(int);

void handle_key_press();