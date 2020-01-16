
#include <lift6.h>
#include "catch2/catch.hpp"
#include <algorithm>

TEST_CASE("Elevator will move up and down then standby until next move down and up")
{
    // Given
    Elevator elevator(floor(0));

    // When
    elevator.floorCall(floor(56), Direction::DOWN);
    elevator.run();
    elevator.innerElevatorRequest(floor(0));
    auto isStandby1 = elevator.isStandingBy();
    auto standbyFloor1 = elevator.currentFloor();
    elevator.floorCall(floor(-5), Direction::UP);
    elevator.run();
    elevator.innerElevatorRequest(floor(26));
    elevator.run();
    auto isStandby2 = elevator.isStandingBy();
    auto standbyFloor2 = elevator.currentFloor();

    // Then
    REQUIRE_FALSE(isStandby1);
    REQUIRE_THAT(standbyFloor1, Predicate<Floor>(
            [] (Floor const & f) -> bool { return f.floorNumber == 56; },
            "Floor number should match")
    );
    REQUIRE(isStandby2);
    REQUIRE_THAT(standbyFloor2, Predicate<Floor>(
            [] (Floor const & f) -> bool { return f.floorNumber == 26; },
            "Floor number should match")
    );

}
