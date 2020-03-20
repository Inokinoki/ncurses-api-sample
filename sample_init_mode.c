#include <ncurses.h>

int main()
{
    initscr();  // Init a screen
    
    raw();      // Signal -> User Defined Handle Function
    // cbreak();   // Signal -> Signal

    echo();
    // noecho();   // No echo on the screen

    // keypad(stdscr, TRUE);   // Allow function keys
    
    // halfdelay(10);

    printw("Hello World!!!");   // Print string
    
    refresh();  // Put onto screen
    
    getch();  // Wait for an input
    getch();  // Wait for an input
    
    endwin();   // End the window

    return 0;
}
