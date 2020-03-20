#include <ncurses.h>

int main()
{
    initscr();  // Init a screen

    printw("Hello World!!!");   // Print string
    
    refresh();  // Put onto screen

    // getyx(win, y, x);    // Get cursor pos
    // scr_dump(FILE *);
    // scr_restore(FILE *);
    // copywin(src, dst, sminrow, smincol, ...);
    
    getchar();  // Wait for an input
    
    endwin();   // End the window

    return 0;
}
