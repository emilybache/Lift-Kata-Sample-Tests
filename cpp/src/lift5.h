#ifndef LIFTKATA_LIFT5_H
#define LIFTKATA_LIFT5_H


class GreedyLiftCommandHandler
{
public:
    GreedyLiftCommandHandler(){};
};

class Building
{
public:
    Building(int lowestFloor, int highestFloor)
    {};
};
class Lift
{
public:
    Lift(Building building, GreedyLiftCommandHandler commandHandler){};

    void turnOn();
    void go(int floor);
    void operate();
    int getCurrentFloor();
};


static void given(void (*pFunction)(Lift &));
static void when(void (*pFunction)(Lift &));
static void then(void (*pFunction)(Lift &));

#endif //LIFTKATA_LIFT5_H
