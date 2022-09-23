#include "helloWorld.h"
#include "1_1.h"
#include "1_2.h"
#include "1_4.h"
#include "1_6.h"
#include "1_9.h"
#include "1_10.h"
#include <curses.h>

void main() {
    // below code will test each example
    HelloWorld(); // Hello World test run
    clear();
    PrintText(); // example 1.1
    clear();
    PrintItOutLoud(); // example 1.2
    clear();
    PrintNameNumberEmail(); // example 1.4
    clear();
    PrintMenu(); // example 1.6
    clear();
    FirstShapeOfStars(); // example 1.9
    clear();
    SecondShapeOfStars(); // example 1.10
}