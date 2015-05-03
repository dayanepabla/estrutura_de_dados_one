#include "organism.h"

Organism::Organism(bool alive)
    : _alive(alive) {}

Organism::~Organism()
{}

bool Organism::is_dead()
{
    return !this->_alive;
}

bool Organism::is_alive()
{
    return this->_alive;
}


void Organism::kill()
{
    this->_alive = false;
}
