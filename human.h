//
// Created by lucas on 11/1/2020.
//

#ifndef AUTOMATON_HUMAN_H
#define AUTOMATON_HUMAN_H


#include <vector>

class human {
public:
    bool born_sex = 0; // 0 = female, 1 = male. No support for intersex as of now.
    bool alive = true;
    double hunger = 0.0;
    double thirst = 0.0;
    std::vector<std::pair<std::string,double>> wants_list {}; // the want, how much needed on 0 to 1
};

human humanLogic(human*);
human tickHunger(human*);
human tickThirst(human*);
human tickDeath(human*);
human tickWants(human*);

#endif //AUTOMATON_HUMAN_H
