#ifndef __DRUM_H__
#define __DRUM_H__
#include <queue>
#pragma once

class Drum{
    public:
        Drum();
        Drum(std::queue<char> other);
        Drum(char *syms);
        char getCurrentSymbol();
        void addSymbol(char sym);
        void cycleSymbol();
        void setSpeed(int newSpeed);
        int getSpeed();
        void setSpeedLimit(int newSpeedLimit);
        int getSpeedLimit();
    private:
        std::queue<char> symbols;
        int speed = 0;
        int speedLimit = 0;
};
#endif // __DRUM_H__