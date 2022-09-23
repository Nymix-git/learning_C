#include "1_2.h"
#include <curses.h>

int PrintItOutLoud() {
    // Starts the ncurses mode
    initscr();

    // Prints in ncurses
    printw("Los geht's!");
    printw("\nLos geht's!");

    // Prints to the actual screen
    refresh();

    // Wait for input to continue
    getch();

    // Ends the ncurses mode
    endwin();
    
    return 0;
}