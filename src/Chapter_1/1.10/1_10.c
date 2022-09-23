#include "1_9.h"
#include "1_10.h"
#include <curses.h>


/**
 * @brief Prints stars in a shape with height 6 and width 10
 * 
 * @return int Returns 0 if printing was successful
 */

int SecondShapeOfStars() {
    const int MAX = 12;
    // start ncurses
    initscr();

    // print to ncurses
    PrintStars(12, MAX);
    PrintStars(8, MAX);
    PrintStars(4, MAX);
    PrintStars(8, MAX);
    PrintStars(12, MAX);

    // print to screen
    refresh();

    // wait for userinput to continue
    getch();

    // end ncurses
    endwin();
    
    return 0;
}