#ifndef __SLOTS_H__
#define __SLOTS_H__
#pragma once
#include "State.h"
#include "Drum.h"
#include <vector>
//TO DO:
//add more shit i dunno
class State;
class Slots{
    public:
        Slots();
        Slots(std::vector<Drum> other);
        void triggerState();
        inline State* getCurrentState() const {return currentState;}
        void setState(State& state);
        void addDrum(Drum drum);
    private:
        State* currentState = NULL;
        std::vector<Drum> drums;
};

#endif // __SLOTS_H__