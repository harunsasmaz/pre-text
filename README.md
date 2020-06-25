# Pre/text

A Vim-style Text Editor.

## Libraries and Preliminaries

* You may feel the need of check <code>termios.h></code> to understand raw mode

* Please check the ASCII Table and its arithmetic before start reading the code

* Pretext uses VT100 Escape Sequence, Please read the guide [here](https://vt100.net/docs/vt100-ug/chapter3.html)

  * VT100 sequence enables cursor positioning, screen positioning, set/reset mode and many more functionalities in Pretext editor, you will encounter with this sequence frequently.

* If you are not familiar with [variadic functions](https://en.wikipedia.org/wiki/Variadic_function) and callback functions, give a short reading to have an idea.

* Pretext uses [ANSI Escape Codes](https://en.wikipedia.org/wiki/ANSI_escape_code) for coloring

## Compile

> gcc -o pretext pretext.c

## Run

Either with a new file as:

> ./pretext

Or with an existing file:

> ./pretext pretext.c

## Supported Functionalities

<b>Save / Save as</b>

> You can use <kbd>CTRL</kbd> + <kbd>S</kbd> to save your modifications.

> <b>Note that</b> if you are editing a new file, prompt will want you to enter a file name to save.


<b>Find</b>

> You can use <kbd>CTRL</kbd> + <kbd>F</kbd> to do incremental search in the file.

> Both forward and backward search are enabled, you can go next and back in search results.

> If you are not familiar with incremental search, visit [here](https://en.wikipedia.org/wiki/Incremental_search#:~:text=In%20computing%2C%20incremental%20search%2C%20incremental,immediately%20presented%20to%20the%20user.)

<b>Syntax Highlight</b>

> Pretext supports a basic syntax highlighting in .c, .h and .cpp files. You can notice that strings, numbers and keywords are highlighted in a really simple manner.

> When you open a new file, if you save it as one of the mentioned file type, then you will observe that syntax is highlighted.

> Also, search results are highlighted.

<b>Quit</b>

> Another keyboard shortcut that is enabled in Pretext is <kbd>CTRL</kbd> + <kbd>Q</kbd> combination. So you can quit from a file as long as all modifications are saved or there is no modification.

> If you do modifications in the file and try to quit, Pretext prompts you a notification message to warn you that you have unsaved modifications. You can either press <kbd>CTRL</kbd> + <kbd>F</kbd> three times to quit without saving or save the modifications and quit at once.

<b>File Information</b>

> Pretext shows you the total lines and bytes in file and if you have modifications, then it shows you how many bytes are modified.

