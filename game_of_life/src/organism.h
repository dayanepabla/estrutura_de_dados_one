#ifndef ORGANISM_H
#define ORGANISM_H

/**
 * @brief Um organismo simples.
 *
 * Um organismo é um tipo de vida muito simples podendo apenas estar vivo ou morto.
 * Esta classe ofere ainda, alguns método utilitárias, para matar um organismo.
 */
class Organism
{
    public:
        /**
         * Cria um organismo setando o estado, se vivo ou morto.
         *
         * @param alive Indica se o organismo está vivo ou morto.
         */
        Organism(bool alive);
        ~Organism();

        /**
         * Indica se o organismo está morto.
         *
         * @returns Verdadeiro se o organismo estiver morto e falso caso contrário.
         */
        bool is_dead();

        /**
         * Indica se o organismo está vivo.
         *
         * @returns Falso se o organismo estiver morto e verdadeiro caso contrário.
         */
        bool is_alive();


        /**
         * Mata o organismo, setando #_alive para false.
         */
        void kill();

    private:
        /**
         * Indicador de estado do organismo, se vivo ou morto.
         */
        bool _alive;
};
#endif
