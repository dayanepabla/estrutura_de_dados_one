#include "cell.h"

Cell::Cell()
    : _neighbors(new std::vector<Cell>()) {}

Cell::~Cell()
{
    delete this->_neighbors;
}

bool Cell::empty()
{
    return true;
}

bool Cell::dead()
{
    return this->empty();
}

std::vector<Cell>* Cell::neighbors()
{
    return this->_neighbors;
}
