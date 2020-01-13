#ifndef LIFTKATA_LIFT6_H
#define LIFTKATA_LIFT6_H

enum Direction
{
    UP, DOWN
};

class Floor
{
public:
    int floorNumber;
protected:
    Floor(int floor) {};

    friend Floor floor(int floor);
};

Floor floor(int floor) {
    return Floor(floor);
};

class Elevator
{
public:
    Elevator(Floor floor){};

    void floorCall(Floor floor, Direction direction);

    void run();

    void innerElevatorRequest(Floor floor);

    bool isStandingBy();

    Floor currentFloor();
};



#endif //LIFTKATA_LIFT6_H
