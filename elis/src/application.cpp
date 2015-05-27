#include "application.h"

Elis::Application::Application()
{}

Elis::Application::~Application()
{}

void
Elis::Application::initialize(int argc, char const *argv[])
{
    parse_command_line(argc, argv);
}

void
Elis::Application::parse_command_line(int argc, char const *argv[])
{}
