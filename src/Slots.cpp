#include "Slots.h"
//TO DO:
Slots::Slots(){
    Drum d1("abc"), d2("abc"), d3("abc");
    d1.setSpeedLimit(500);
    d2.setSpeedLimit(750);
    d3.setSpeedLimit(1000);
    drums.push_back(d1);
    drums.push_back(d2);
    drums.push_back(d3);
}

Slots::Slots(std::vector<Drum> other){
    drums = other;
}
void Slots::setState(State& state){
    if (currentState != NULL)
        currentState->exitState(this);
    currentState = &state;
    currentState->enterState(this);
}

//trigger current state action
void Slots::triggerState(){
    
}

void Slots::addDrum(Drum drum){
    drums.push_back(drum);
}
