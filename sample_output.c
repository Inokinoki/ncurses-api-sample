#include <ncurses.h>

int main()
{
    initscr();  // Init a screen

    printw("Hello World!!!");   // Print string
    addch('C' | A_BOLD | A_UNDERLINE);
    addstr("WWWWWWWWWW");
    // mvaddch(row, col, 'c');
    
    refresh();  // Put onto screen
    
    getchar();  // Wait for an input
    
    endwin();   // End the window

    return 0;
}
