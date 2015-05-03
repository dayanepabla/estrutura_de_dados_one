#include "catch.h"

#include "organism.h"

SCENARIO("an organism can be killed", "[organism]")
{
    GIVEN("a dead organism")
    {
        Organism organism = Organism(false);

        REQUIRE(organism.is_dead() == true);

        WHEN("it is killed")
        {
            organism.kill();

            THEN("it remains dead")
            {
                REQUIRE(organism.is_dead() == true);
            }
        }
    }

    GIVEN("an alive organism")
    {
        Organism organism = Organism(true);

        REQUIRE(organism.is_alive() == true);

        WHEN("it is killed")
        {
            organism.kill();

            THEN("it dies")
            {
                REQUIRE(organism.is_dead() == true);
            }
        }
    }
}
