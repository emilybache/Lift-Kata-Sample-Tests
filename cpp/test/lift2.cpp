#include <lift2.h>
#include "catch2/catch.hpp"

TEST_CASE("3. After pressing the button, elevator closes\n"
          "doors, and once they are closed,\n"
          "        it starts the engine.") {
    Lift e = Lift(7);
    e.pushButton(1);
    ElevatorAction a = e.nextAction();
    REQUIRE(a == ElevatorAction::CLOSE_DOORS);
    a = e.nextAction();
    REQUIRE(a == ElevatorAction::START_ENGINE_UP);
    while (e.getState() != ElevatorState::WAITING) {
        a = e.nextAction();
        e.pushButton(0);
        a = e.nextAction();
        REQUIRE(a == ElevatorAction::CLOSE_DOORS);
        a = e.nextAction();
        REQUIRE(a == ElevatorAction::START_ENGINE_DOWN);
    }
}


