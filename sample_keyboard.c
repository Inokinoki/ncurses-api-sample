#include <ncurses.h>

int main()
{
    initscr();  // Init a screen
    cbreak();
    noecho();

    printw("Hello World!!!");   // Print string
    
    refresh();  // Put onto screen
    
    int ch;
    ch = getch();

    while (1)
    {
        if (ch == 'A' || ch == 'a')
        {
            printw("LEFT!!!!\n");   // Print string
        }
        ch = getch();
    }

    // ch = getch();
    
    endwin();   // End the window

    return 0;
}
