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
    // int key;
    // int line = 1;

    // std::stringstream output;

    Elis::UI::Window window;
    Elis::Application app;

    // app = Elis::Application();

    // app->initialize(argc, argv);

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
