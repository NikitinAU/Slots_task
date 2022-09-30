#include "Drum.h"

Drum::Drum(){}

Drum::Drum(std::queue<char> other){
    symbols.swap(other);
}

Drum::Drum(char *syms){
    for (syms; *syms!='\0'; syms++){
        symbols.push(*syms);
    }
}

void Drum::cycleSymbol(){
    char tmp = symbols.front();
    symbols.pop();
    symbols.push(tmp);
}

void Drum::addSymbol(char sym){
    symbols.push(sym);
}

char Drum::getCurrentSymbol(){
    return symbols.front();
}

void Drum::setSpeed(int newSpeed){
    speed = newSpeed;
}

int Drum::getSpeed(){
    return speed;
}

void Drum::setSpeedLimit(int newSpeedLimit){
    speedLimit = newSpeedLimit;
}

int Drum::getSpeedLimit(){
    return speedLimit;
}