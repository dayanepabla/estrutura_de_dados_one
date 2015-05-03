#include "catch.h"
#include <fstream>

#include "parser.h"

SCENARIO("parsers can read configurations from streams", "[parser]")
{
    GIVEN("a valid ofstream")
    {
        std::ofstream cfg("./test/data/cfg1.dat", std::ios::in);

        REQUIRE(cfg.is_open() == true);

        WHEN("parses the content")
        {
            THEN("dimenssions are zero")
            {

            }
        }
    }
}
