#include <lift3.h>
#include "catch2/catch.hpp"

void PeopleHaveArrivedAtTheirDestinations(std::vector<Person> people);

TEST_CASE("PeopleAreTakenToTheirDestinationEfficientlyWithoutExceedingCapacity") {
    const std::vector<Person> &people = std::vector<Person>{
            Person("Robb", 0, 1),
            Person("Lyda", 1, 2),
            Person("Catharine", 1, 2)
    };
    Lift lift = SmallLift(1);
    Controller controller = SmallController(lift);
    controller.movePeople(people);
    PeopleHaveArrivedAtTheirDestinations(people);
    REQUIRE(lift.getTotalNumberOfVisits() == 5);
}

void PeopleHaveArrivedAtTheirDestinations(std::vector<Person> people) {
    for (const auto &person : people) {
        REQUIRE(person.destination == person.currentFloor);
    }
}
