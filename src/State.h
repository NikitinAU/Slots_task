#ifndef __STATE_H__
#define __STATE_H__
#pragma once
#include "Slots.h"
//forward declaration to resolve circular dependency/include
class Slots;
//defines abstract class (interface) for States
class State{
    public:
        virtual void enterState(Slots* slots) = 0;
        virtual void changeState(Slots* slots) = 0;
        virtual void exitState(Slots* slots) = 0;
        virtual ~State() {}
};
#endif // __STATE_H__