#include "application.h"

Elis::Application::Application()
 : window(new Elis::UI::Window()) {}

Elis::Application::~Application()
{}

void
Elis::Application::initialize(int argc, char const *argv[])
{
    parse_command_line(argc, argv);

}

void
Elis::Application::run()
{
    char key;

    window->show();
    configure_ncurses();

    printw("Hello world");

    while(true)
    {
        key = getch();

        if (key == 'q')
            break;

        refresh();
    }

    window->hide();
}

void
Elis::Application::parse_command_line(int argc, char const *argv[])
{}

void
Elis::Application::configure_ncurses()
{
    raw();
    noecho();
}
