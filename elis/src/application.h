#ifndef _APPLICATION_H_
#define _APPLICATION_H_

#include "ui/window.h"

namespace Elis { class Application; }

class Elis::Application
{
    public:
        Application();
        ~Application();

        void initialize(int argc, char const *argv[]);

    private:
        void parse_command_line(int argc, char const *argv[]);

    private:
        Elis::UI::Window *window;
};

#endif
