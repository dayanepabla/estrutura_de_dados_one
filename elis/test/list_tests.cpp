#include "catch.h"
#include <iostream>
#include "list.h"

using namespace Elis;

SCENARIO("we can create an empty list", "[list]")
{
    GIVEN("a list")
    {
        List list = List();

        THEN("it is empty")
        {
            REQUIRE(list.is_empty() == true);
        }
    }
}

SCENARIO("we can push front an item", "[list]")
{
    GIVEN("an empty list")
    {
        List list = List();

        REQUIRE(list.is_empty() == true);

        WHEN("an item is pushed")
        {
            std::string foobar = "foobar";

            list.push_front(foobar);

            THEN("size change by one")
            {
                REQUIRE(list.size() == 1);
            }

            THEN("the first item is foobar")
            {
                REQUIRE(list.first() == "foobar");
            }
        }
    }
}

SCENARIO("we can get the first item", "[list]")
{
    GIVEN("a non empty list")
    {
        List list = List();
        std::string str = "foobar";

        list.push_front(str);

        REQUIRE(list.is_empty() == false);

        WHEN("first is called")
        {
            std::string first = list.first();

            THEN("we get it")
            {
                REQUIRE(first == "foobar");
            }
        }
    }
}

SCENARIO("we can pop out an item", "[list]")
{
    GIVEN("an empty list")
    {
        List list = List();

        REQUIRE(list.is_empty() == true);

        WHEN("an item is poped out")
        {
            THEN("we get nothing")
            {
                REQUIRE(list.pop() == "");
            }
        }
    }
}
