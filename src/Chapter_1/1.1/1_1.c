#include "1_1.h"
#include <curses.h>

int PrintText() {
    // Start the ncurses mode
    initscr();
    
    // Print the text in ncurses 
    printw("Hi, \nWer geht");
    printw(" mit in den Biergarten");
    printw("?\n");
    
    // Print it to the actual screen
    refresh();

    // Wait for user input
    getch();

    // End the ncurses mode
    endwin();
    return 0;
}