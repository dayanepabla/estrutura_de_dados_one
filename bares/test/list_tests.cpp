#include "catch.hpp"

#include "list.cpp"


SCENARIO("we can insert an item", "[list]")
{
    GIVEN("an empty list")
    {
        List<int> list = List<int>();

        REQUIRE(list.empty() == true);

        WHEN("an item is inserted")
        {
            List<int>::iterator begin;

            begin = list.begin();

            list.insert(begin, 123);

            THEN("size change by one")
            {
                REQUIRE(list.size() == 1);
            }

            THEN("the first item is 123")
            {
                REQUIRE(list.front() == 123);
            }
        }
    }
}

SCENARIO("we can push front", "[list]")
{
    GIVEN("an empty list")
    {
        List<int> list = List<int>();

        REQUIRE(list.empty() == true);

        WHEN("an item is pushed")
        {
            list.push_front(123);

            THEN("size change by one")
            {
                REQUIRE(list.size() == 1);
            }

            THEN("the item is the first")
            {
                REQUIRE(list.front() == 123);
            }
        }
    }
}
