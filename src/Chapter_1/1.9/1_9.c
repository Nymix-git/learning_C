#include "1_9.h"
#include <curses.h>

/**
 * @brief Prints out i stars on one line and builds space to center the stars. max is the maximum number of stars that should be printed in one line and is used to determine how many spaces are needed to center the stars.
 * 
 * @param i The number of stars to print. Needs to be an even number and minimum 2
 * @param max The maximum number of stars that should be printed in one line 
 * @return int returns 1 if the input is wrong, 0 if printing was successful
 */

int PrintStars(int i, int max) {
    // do not print any stars if there should be more then max  or less then 2 or not an even number of stars be printed
    if (i > max || i < 2 || i % 2 != 0) {
        return 1;
    }
    // count determines how many spaces there are required
    int count = (max / 2) - (i / 2);
    // printing spaces
    for (int g = 0; g < count; g++) {
        printw(" ");
    }
    // printing stars
    for (int j = i; j > 0; j--) {
        printw("*");
    }
    // end with a new line
    printw("\n");
    return 0;
}

/**
 * @brief Prints stars in a shape with height 6 and width 10
 * 
 * @return int Returns 0 if printing was successful
 */

int FirstShapeOfStars() {
    const int MAX = 10;
    // start ncurses
    initscr();

    // print to ncurses
    PrintStars(2, MAX);
    PrintStars(6, MAX);
    PrintStars(10, MAX);
    PrintStars(6, MAX);
    PrintStars(2, MAX);

    // print to screen
    refresh();

    // wait for userinput to continue
    getch();

    // end ncurses
    endwin();
    
    return 0;
}