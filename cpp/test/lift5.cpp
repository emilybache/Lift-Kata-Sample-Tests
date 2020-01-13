
#include <lift5.h>
#include "catch2/catch.hpp"

TEST_CASE("Lift delivers to requested floor in a greedy way")
{
    given([](Lift &lift) {
        auto commandHandler = GreedyLiftCommandHandler();
        auto building = Building(-2, 6);
        lift = Lift(building, commandHandler);
        lift.turnOn();
        lift.go(3);
        lift.go(4);
    });

    when([](Lift &lift) {
        lift.operate();
    });


    then([](Lift &lift) {
        REQUIRE(lift.getCurrentFloor() == 3);
    });

    when([](Lift &lift) {
        lift.operate();
    });


    then([](Lift &lift) {
        REQUIRE(lift.getCurrentFloor() == 4);
    });
}


