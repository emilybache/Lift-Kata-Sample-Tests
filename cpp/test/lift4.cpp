#include <lift4.h>
#include "catch2/catch.hpp"

TEST_CASE("Queues calls when not going the same direction") {
    auto lift = Lift(0, Direction::STOPPED);
    lift = lift.calledFrom(2, Direction::UP);
    lift = lift.calledFrom(2, Direction::DOWN);

    REQUIRE(lift.at == 2);
    REQUIRE(lift.goingTo == Direction::UP);
}


