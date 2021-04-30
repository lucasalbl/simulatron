//
// Created by lucas on 11/1/2020.
//

#include "human.h"


human humanLogic(human* H) {
    if (H->alive == true) {
        tickHunger(H);
        tickThirst(H);
        tickDeath(H);


    }
    return *H;
}

human tickHunger(human* H) {
        H->hunger = H->hunger + 0.05 + 0.01*H->born_sex;

    if ( H->hunger > 0.3 ) {
        H->wants_list.emplace_back("eat",H->hunger);
    }

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
