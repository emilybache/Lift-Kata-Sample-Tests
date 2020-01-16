#ifndef LIFTKATA_LIFT3_H
#define LIFTKATA_LIFT3_H

#include <string>
#include <vector>

class Person {
public:
    Person(const std::string &name, int current_floor, int destination) {};
    int destination;
    int currentFloor;
};

class Lift {
public:
    int getTotalNumberOfVisits();
};

class SmallLift : public Lift {
public:
    explicit SmallLift(int floor) {}
};

class Controller {
public:
    void movePeople(std::vector<Person> people);
};

class SmallController : public Controller {
public:
    explicit SmallController(Lift lift) {};

};

#endif //LIFTKATA_LIFT3_H
