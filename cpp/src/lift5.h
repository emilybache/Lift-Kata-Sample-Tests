#ifndef LIFTKATA_LIFT5_H
#define LIFTKATA_LIFT5_H


class CommandHandler
{
public:
    CommandHandler(){};
};
class GreedyLiftCommandHandler : public CommandHandler
{
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
    Lift(Building building, CommandHandler commandHandler){};

    void setBuilding(Building building);
    void setCommandHandler(CommandHandler commandHandler);
    void turnOn();
    void go(int floor);
    void operate();
    int getCurrentFloor();
};


static void given(void (*pFunction)(Lift &));
static void when(void (*pFunction)(Lift &));
static void then(void (*pFunction)(Lift &));

#endif //LIFTKATA_LIFT5_H
