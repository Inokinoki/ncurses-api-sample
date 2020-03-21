#include <ncurses.h>
#include <panel.h>

int main()
{
    WINDOW *my_wins[3];
    PANEL *my_panels[3];

    int lines = 10, cols = 40, y = 2, x = 4, i;

    initscr();  // Init a screen
    cbreak();
    noecho();

    my_wins[0] = newwin(lines, cols, y, x);
    my_wins[1] = newwin(lines, cols, y + 1, x + 5);
    my_wins[2] = newwin(lines, cols, y + 2, x + 10);

    for (i=0;i<3;i++)
    {
        box(my_wins[i], 0, 0);  // Add box to window
    }
    my_panels[0] = new_panel(my_wins[0]);
    my_panels[1] = new_panel(my_wins[1]);
    my_panels[2] = new_panel(my_wins[2]);

    wprintw(my_wins[0], "Panel 0");
    wprintw(my_wins[1], "Panel 1");
    wprintw(my_wins[2], "Panel 2");

    // Establish user pointer to the next panel
    set_panel_userptr(my_panels[0], my_panels[1]);
    set_panel_userptr(my_panels[1], my_panels[2]);
    set_panel_userptr(my_panels[2], my_panels[0]);

    update_panels();
    doupdate();

    PANEL *top = my_panels[2];
    int ch;
    while((ch = getch()) != KEY_F(1))   // User F1 to exit
    {
        switch (ch)
        {
            case 9:
                top = (PANEL *)panel_userptr(top);
                top_panel(top);
                break;
        }
        update_panels();
        doupdate();
    }

    endwin();   // End the window

    return 0;
}
