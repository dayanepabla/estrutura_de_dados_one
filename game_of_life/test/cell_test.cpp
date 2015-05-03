#include "catch.h"

#include "cell.h"
#include "organism.h"

SCENARIO("cells can be killed", "[cell]")
{
    Organism* organism = new Organism(true);

    REQUIRE(organism->is_alive() == true);

    GIVEN("an empty cell")
    {
        Cell cell = Cell();

        REQUIRE(cell.is_empty() == true);
        REQUIRE(cell.is_dead() == true);

        WHEN("it is killed")
        {
            cell.kill();

            THEN("it remains dead")
            {
                REQUIRE(cell.is_dead() == true);
            }
        }
    }

    GIVEN("a cell initially alive")
    {
        Cell cell = Cell(organism);

        REQUIRE(cell.is_alive() == true);

        WHEN("it is killed")
        {
            cell.kill();

            THEN("it dies")
            {
                REQUIRE(cell.is_dead() == true);
            }
        }
    }
}

SCENARIO("cells can be revived", "[cell]")
{
    Organism* organism = new Organism(true);

    REQUIRE(organism->is_alive() == true);

    GIVEN("an empty cell")
    {
        Cell cell = Cell();

        REQUIRE(cell.is_empty() == true);

        WHEN("it is revived")
        {
            cell.revive(organism);

            THEN("it lives")
            {
                REQUIRE(cell.is_alive() == true);
            }
        }

        WHEN("it is revived with invalid organism")
        {
            cell.revive(nullptr);

            THEN("it remains empty and dead")
            {
                REQUIRE(cell.is_empty() == true);
                REQUIRE(cell.is_dead() == true);
            }
        }
    }

    GIVEN("a non empty cell")
    {
        Cell cell = Cell(organism);

        REQUIRE(cell.is_empty() == false);
        REQUIRE(cell.is_alive() == true);

        WHEN("it is revived")
        {
            cell.revive(organism);

            THEN("it remains alive")
            {
                REQUIRE(cell.is_alive() == true);
            }
        }
    }
}

SCENARIO("cells can have neighbors", "[cell]")
{

}
