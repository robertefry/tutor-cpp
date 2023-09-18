
#include <catch2/catch_all.hpp>

#include "hello_world.hh"

TEST_CASE("GetHelloWorld() returns \"Hello, World!\"")
{
    REQUIRE( GetHelloWorld() == "Hello, World!" );
}
