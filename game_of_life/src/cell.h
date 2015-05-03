#ifndef CELL_H
#define CELL_H

#include <vector>

#include "organism.h"

/**
 * @brief Uma célula do jogo.
 *
 * Esta classe representa uma célula do jogo, responsável por manter um organismo.
 */
class Cell
{
    public:
        /**
         * Construtor.
         *
         * Initializa uma célula vazia ou morta, ou seja, sem organismo.
         */
        Cell();
        ~Cell();

        Cell(Organism* organism);

        bool is_empty();
        bool is_dead();
        bool is_alive();
        bool has_organism();

        void kill();
        void revive(Organism* organism);

    private:
        Organism* _organism;
};

#endif
