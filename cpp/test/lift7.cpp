#include <lift7.h>
#include "catch2/catch.hpp"

TEST_CASE("Idle lift accepts call")
{
    auto lift = Lift(0);
    auto accepts_call = lift.acceptsCall(
            Call(3, Movement::DOWN)
    );
    REQUIRE(accepts_call);
    REQUIRE(3 == lift.getNextPlannedStop());

}


