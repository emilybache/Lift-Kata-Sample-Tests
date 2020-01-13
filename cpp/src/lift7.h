#ifndef LIFTKATA_LIFT7_H
#define LIFTKATA_LIFT7_H

enum Movement
{
    UP, DOWN
};

class Call
{
public:
    Call(int floor, Movement movement) {};
};

class Lift
{
public:
    Lift(int floor)
    {};

    bool acceptsCall(Call call);
    int getNextPlannedStop();
};

#endif //LIFTKATA_LIFT7_H
