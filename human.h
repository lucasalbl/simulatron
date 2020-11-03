//
// Created by lucas on 11/1/2020.
//

#ifndef AUTOMATON_HUMAN_H
#define AUTOMATON_HUMAN_H


class human {
public:
    bool born_sex = 0;
    bool alive = true;
    float hunger = 0.0f;

};

human tickHunger(human*);
human tickDeath(human*);

#endif //AUTOMATON_HUMAN_H
