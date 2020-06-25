
// Opens the editor in the beginning with correct syntax highlight
// and data transferred from a file or buffer.
void editor_open(char *);

// Inserts a char to our editor after key press.
void editor_insert_char(int);

// Inserts a new line to our editor when ENTER is pressed
// or a row is full with chars.
void insert_new_line();

// Deletes a char from the editor, handles BACKSPACE
void editor_del_char();

// Saves all modifications in a file, handles CTRL + S
void editor_save();

// Do the incremental search, handles CTRL + F
void editor_find_callback(char*, int);

// Key event calls this and this calls above callback with the query got from user.
void editor_find();