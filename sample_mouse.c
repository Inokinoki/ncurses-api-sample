#include <ncurses.h>

int main()
{
    MEVENT event;

    initscr();  // Init a screen
    cbreak();
    noecho();

    mousemask(ALL_MOUSE_EVENTS, NULL);

    printw("Hello World!!!");   // Print string
    
    refresh();  // Put onto screen
    
    int ch;
    ch = getch();

    while (1)
    {
        if (ch == KEY_MOUSE)
        {
            printw("MOUSE EVENT!!!\n");
            if (getmouse(&event) == OK)
            {
                printw("MOUSE EVENT OK!!!\n");
            }
        }
        refresh();  // Put onto screen
        ch = getch();
    }

    // ch = getch();
    
    endwin();   // End the window

    return 0;
}
