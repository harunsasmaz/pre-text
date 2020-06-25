#define PRETEXT_VERSION "0.0.1"
#define TAB_STOP 8
#define QUIT_TIMES 3
#define CTRL_KEY(k) ((k) & 0x1f)

enum editor_key {
    BACKSPACE = 127,
    ARROW_LEFT = 1000,
    ARROW_RIGHT,
    ARROW_UP,
    ARROW_DOWN,
    DEL_KEY,
    HOME_KEY,
    END_KEY,
    PAGE_UP,
    PAGE_DOWN
};

// Updates the cursor x and y points according to key event
void scroll();

// Handles arrow key events
void move_cursor(int);

// Process all key event and routes the events to related functions.
void handle_key_press();