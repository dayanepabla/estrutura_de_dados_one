#ifndef _WINDOW_
#define _WINDOW_

#include <ncurses.h>

namespace Elis
{
    namespace UI { class Window; }
}

class Elis::UI::Window
{
    public:
        Window();
        ~Window();

    private:
        WINDOW *window;
};

#endif
