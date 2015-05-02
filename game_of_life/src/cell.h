#ifndef CELL_H
#define CELL_H

#include <vector>

class Cell
{
    public:
        Cell();
        ~Cell();

        bool empty();
        bool dead();

        std::vector<Cell>* neighbors();

    private:
        std::vector<Cell>* _neighbors;
};

#endif
