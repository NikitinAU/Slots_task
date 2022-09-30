#include "ConcreteStates.h"
//TO DO:
//implement enter and exit states

//------------------IDLE--------------------
void Idle::changeState(Slots* slots){
    //Idle -> Start
    slots->setState(Start::getInstance());
}

State& Idle::getInstance(){
    static Idle singleton;
    return singleton;
}

void Idle::enterState(Slots* slots){
    std::cout << "enter Idle state\n";
}

void Idle::exitState(Slots* slots){
    std::cout << "exit Idle state\n";
}
//------------------START--------------------
void Start::changeState(Slots* slots){
    //Start -> Spin
    slots->setState(Spin::getInstance());
}

State& Start::getInstance(){
    static Start singleton;
    return singleton;
}

void Start::enterState(Slots* slots){
    std::cout << "enter Start state\n";
}

void Start::exitState(Slots* slots){
    std::cout << "exit Start state\n";
}
//------------------SPIN--------------------
void Spin::changeState(Slots* slots){
    //Spin -> Stop
    slots->setState(Stop::getInstance());
}

State& Spin::getInstance(){
    static Spin singleton;
    return singleton;
}

void Spin::enterState(Slots* slots){
    std::cout << "enter Spin state\n";
}

void Spin::exitState(Slots* slots){
    std::cout << "exit Spin state\n";
}
//------------------STOP--------------------
void Stop::changeState(Slots* slots){
    //Stop -> Prize
    slots->setState(Prize::getInstance());
}

State& Stop::getInstance(){
    static Stop singleton;
    return singleton;
}

void Stop::enterState(Slots* slots){
    std::cout << "enter Stop state\n";
}

void Stop::exitState(Slots* slots){
    std::cout << "exit Stop state\n";
}
//------------------PRIZE--------------------
void Prize::changeState(Slots* slots){
    //Prize -> Idle
    slots->setState(Idle::getInstance());
}

State& Prize::getInstance(){
    static Prize singleton;
    return singleton;
}

void Prize::enterState(Slots* slots){
    std::cout << "enter Prize state\n";
}

void Prize::exitState(Slots* slots){
    std::cout << "exit Prize state\n";
}