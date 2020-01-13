enum ElevatorAction
{
    CLOSE_DOORS, START_ENGINE_UP, START_ENGINE_DOWN
}


enum ElevatorState {
    WAITING
};


class Lift {
public:
    Lift(int total_floors) {}
    void pushButton(int floor);
    ElevatorAction nextAction();
    ElevatorState getState();
};
