#include "cell.h"

Cell::Cell()
    : _organism(nullptr) {}

Cell::Cell(Organism* organism)
    : _organism(organism) {}

Cell::~Cell()
{
    delete _organism;
}

bool Cell::is_empty()
{
    return !has_organism();
}

bool Cell::is_dead()
{
    return is_empty() || this->_organism->is_dead();
}

bool Cell::is_alive()
{
    return _organism->is_alive();
}

bool Cell::has_organism()
{
    return _organism != nullptr;
}

void Cell::kill()
{
    delete _organism;
    _organism = nullptr;
}

void Cell::revive(Organism* organism)
{
    _organism = organism;
}
