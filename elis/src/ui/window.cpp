#include "window.h"

Elis::UI::Window::Window()
 : window(nullptr) {}

Elis::UI::Window::~Window()
{}

void
Elis::UI::Window::show()
{
    window = initscr();
}

void
Elis::UI::Window::hide()
{
    endwin();
}
