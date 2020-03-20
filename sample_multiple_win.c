#include <ncurses.h>

WINDOW *create_newwin(int h, int w, int starty, int startx);
void destroy_win(WINDOW *local_win);

int main()
{
    WINDOW *my_win;

    int startx, starty, width, height;
    int ch;

    initscr();
    cbreak();

    height = 10;
    width = 30;

    starty = (LINES - height) / 2;
    startx = (COLS - width) / 2;

    printw("Hello World!!!");   // Print string
    
    refresh();  // Put onto screen
    
    getch();  // Wait for an input

    my_win = create_newwin(height, width, starty, startx);

    getch();  // Wait for an input

    destroy_win(my_win);
    
    endwin();   // End the window

    return 0;
}

WINDOW *create_newwin(int h, int w, int starty, int startx)
{
    WINDOW *local_win;
    local_win = newwin(h, w, starty, startx);
    box(local_win, 0, 0);

    mvwprintw(local_win, 5, 10, "New window");

    wrefresh(local_win);
    return local_win;
}

void destroy_win(WINDOW *local_win)
{
    wborder(local_win, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ');
    wrefresh(local_win);
    delwin(local_win);
}
