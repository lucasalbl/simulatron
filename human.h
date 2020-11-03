//
// Created by lucas on 11/1/2020.
//

#ifndef AUTOMATON_HUMAN_H
#define AUTOMATON_HUMAN_H


class human {
public:
    bool born_sex = 0; // 0 = female, 1 = male. No support for intersex as of now.
    bool alive = true;
    double hunger = 0.0f;

};

human humanTick(human*);
human tickHunger(human*);
human tickDeath(human*);

#endif //AUTOMATON_HUMAN_H
