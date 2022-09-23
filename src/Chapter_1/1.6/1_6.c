#include "1_6.h"
#include <curses.h>

int Print8StarsNcurses() {
    for (int i = 0; i < 8; i++) {
        printw("*");
    }
    
}

int PrintMenu() {
    // Start ncurses mode
    initscr();

    // Print out the menu
    Print8StarsNcurses();
    printw(" Meine Musiktitel ");
    Print8StarsNcurses();
    printw("\n\n\tN = Neuen Eintrag hinzufügen\n");
    printw("\tL = Eintrag löschen\n");
    printw("\tF = Musiktitel finden\n");
    printw("\tA = Alle Einträge anzeigen\n");
    printw("\tB = Programm beenden\n\n");
    printw("Ihre Wahl: ");

    // Print to actual screen
    refresh();

    // Wait for userinput to continue
    getch();

    // End ncurses mode
    endwin();

    return 0;
}