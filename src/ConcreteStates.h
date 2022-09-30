#ifndef __CONCRETESTATES_H__
#define __CONCRETESTATES_H__

#pragma once
#include <iostream>
#include "State.h"
#include "Slots.h"
//defines different States for Slot Machine
//States are a finite automaton with 5 points which are arranged like this:
/*
Launch  ->  [Idle] -> [Start]
                         |
               ^         v
               |       [Spin]
               |         |
                         v
            [Prize] <- [Stop]
*/
//Idle state is evoked on game launch or after Prize state
//It defines main screen in which game awaits player's action
class Idle : public State {
    public:
        void enterState(Slots* slots);
        void changeState(Slots* slots);
        void exitState(Slots* slots);
        static State& getInstance();

    private:
        Idle(){}
        Idle(const Idle* other);
        Idle operator=(const Idle* other);
};
//Start state is evoked after the Idle state
//It is responsible for gradually spinning up drums and transitioning into Spin state
class Start : public State {
    public:
        void enterState(Slots* slots);
        void changeState(Slots* slots);
        void exitState(Slots* slots);
        static State& getInstance();
        
    private:
        Start(){}
        Start(const Start* other);
        Start operator=(const Start* other);
};
//Spin state is evoked after Start state
//It is responsible for constant spinning of drums 
//Spin transitions into next state after a certain amount of time passes or the player's "Stop" action
class Spin : public State {
    public:
        void enterState(Slots* slots);
        void changeState(Slots* slots);
        void exitState(Slots* slots);
        static State& getInstance();

    private:
        Spin(){}
        Spin(const Spin* other);
        Spin operator=(const Spin* other);
        
};
//Stop state is evoked after Spin state
//It is responsible for stopping all drums one by one and them snapping into right positions
class Stop : public State {
    public:
        void enterState(Slots* slots);
        void changeState(Slots* slots);
        void exitState(Slots* slots);
        static State& getInstance();

    private:
        Stop(){}
        Stop(const Stop* other);
        Stop operator=(const Stop* other);
};
//Prize state is evoked after Stop state
//It is resposible for calculating and showing score to the player
//Prize state transitions into Idle state on player confirmation
class Prize : public State {
    public:
        void enterState(Slots* slots);
        void changeState(Slots* slots);
        void exitState(Slots* slots);
        static State& getInstance();

    private:
        Prize(){}
        Prize(const Prize* other);
        Prize operator=(const Prize* other);
};


#endif // __CONCRETESTATES_H__