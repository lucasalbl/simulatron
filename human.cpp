//
// Created by lucas on 11/1/2020.
//

#include "human.h"


human humanTick(human* H) {
    if (H->alive == true) {
        tickHunger(H);
        tickThirst(H);
        tickDeath(H);
    }
    return *H;
}

human tickHunger(human* H) {
        H->hunger = H->hunger + 0.03 + 0.02*H->born_sex;
    return *H;
}

human tickThirst(human* H) {
    H->thirst = H->thirst + 0.05 + 0.02*H->born_sex;
    return *H;
}

human tickDeath(human* H) {
    if( H->hunger >= 1 || H->thirst >= 1) {
        H->alive = false;
    }
    return *H;
}