//
// Created by lucas on 11/1/2020.
//

#include "human.h"


human humanLogic(human* H) {
    if (H->alive == true) {
        tickHunger(H);
        tickThirst(H);
        tickDeath(H);

        if ( H->hunger > 0.7 ) {
            H->wants_list.emplace_back("eat",0.7);
        }
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

human tickWants(human* H) {
    double biggest = 0.0;
    unsigned int location = 0;
    for(auto & i: H->wants_list) {
        if (i.second > biggest) {
            i.second = biggest;
            //TODO location is maybe not the best idea, perhaps find a way to "save" functions in the vector instead of arbitrary strings? And then just call the biggest instead of doing the whole location mess.

        }
    }
}