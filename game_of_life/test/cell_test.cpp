#include "catch.h"

#include "cell.h"

TEST_CASE("a cell initially empty", "[cell]")
{
    Cell cell = Cell();

    REQUIRE(cell.empty() == true);

    SECTION("is dead")
    {
        REQUIRE(cell.dead() == true);
    }

    SECTION("has no neighbors")
    {
        REQUIRE(cell.neighbors()->size() == 0);
    }
}
