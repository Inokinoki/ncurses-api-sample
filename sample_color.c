#include <ncurses.h>

int main()
{
    initscr();  // Init a screen

    start_color();  // Enable color

    init_pair(1, COLOR_RED, COLOR_BLACK);   // Create a pair of fg and bg color

    attron(COLOR_PAIR(1));  // Enable color attribute
    printw("Hello World!!!");   // Print string
    attroff(COLOR_PAIR(1)); // Enable color attribute
    
    refresh();  // Put onto screen
    
    getchar();  // Wait for an input
    
    endwin();   // End the window

    return 0;
}
