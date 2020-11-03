//
// Created by lucas on 11/1/2020.
//

#include "human.h"


human tickHunger(human* H) {
    if (H->alive) {
        H->hunger += 0.05;
    } else {
        H->hunger = 0;
    }
    return *H;
}

human tickDeath(human* H) {
    if( H->hunger >= 1 ) {
        H->alive = false;
    }
    return *H;
}