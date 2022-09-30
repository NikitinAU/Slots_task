#include "Slots.h"
#include "ConcreteStates.h"
#include <conio.h>


void init(){
    Slots slots;
    slots.setState(Idle::getInstance());
}

int main(){
    init();
    return 0;
}