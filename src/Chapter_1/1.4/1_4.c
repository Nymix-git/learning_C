#include "1_4.h"
#include <curses.h>

int PrintNameNumberEmail() {
    // Start ncurses mode
    initscr();

    // Print to ncurses
    printw("Jakob Gridl\n");
    printw("+43 699 18 144 300\n");
    printw("jakob@gridl.at\n");

    // Print to actual screen
    refresh();

    // Wait for userinput to continue
    getch();

    // End ncurses mode
    endwin();

    return 0;
}