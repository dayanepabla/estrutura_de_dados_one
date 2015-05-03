#include <iostream>
#include "catch.h"

#include "life.h"

SCENARIO("lifes can be printed out", "[life]")
{
    Life life = Life();

    GIVEN("a valid stream")
    {
        std::ostream output(std::cout.rdbuf());

        // life.print(output);
    }
}

SCENARIO("lifes can be updated", "[life]")
{

}

SCENARIO("lifes can be stable or not", "[life]")
{

}
