#include <iostream>
#include <string>
#include <sstream>
#include <ncurses.h>

#include "application.h"
#include "ui/window.h"

#define ESCAPE_KEY 27
#define RETURN_KEY 13

int main(int argc, char const *argv[])
{
    Elis::Application *app;

    app = new Elis::Application();

    app->initialize(argc, argv);

    app->run();

    // // Ncurses configuration
    // initscr();
    // raw();
    // noecho();

    // while(true)
    // {
    //     printw("%i*> ", line++);

    //     key = getch();

    //     if (key == 'q')
    //         break;
    //     else if (key == ESCAPE_KEY)
    //         printw("ESCAPE_KEY\n");
    //     else
    //     {
    //         // output << key;
    //         addch(key);
    //         // printw(output.str());
    //     }

    //     refresh();
    // }

    // endwin();

    return 0;
}
