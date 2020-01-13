#ifndef LIFTKATA_LIFT4_H
#define LIFTKATA_LIFT4_H

enum Direction
{
    STOPPED, UP, DOWN
};

class Lift
{
public:
    Lift(int floor, Direction direction) {}

    Lift calledFrom(int floor, Direction direction)
    {
        return Lift(0, UP);
    }
    int at;
    Direction goingTo;
};

#endif //LIFTKATA_LIFT4_H
