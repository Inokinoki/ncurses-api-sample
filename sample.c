#include <ncurses.h>

int main()
{
    initscr();  // Init a screen

    printw("Hello World!!!");   // Print string
    
    refresh();  // Put onto screen
    
    getchar();  // Wait for an input
    
    endwin();   // End the window

    return 0;
}
