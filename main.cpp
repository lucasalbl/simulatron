#include <iostream>
#include <windows.h>
#include "human.h"
#include <vector>
#include <string>

int main() {

    human Bertha;
    Bertha.born_sex = 1;

    for (int i = 0; i < 1000; i++) {
        Sleep(50);
        Bertha = humanLogic(&Bertha);
        std::cout << Bertha.hunger << '\t' << Bertha.thirst <<'\t' << Bertha.alive << Bertha.wants_list.size() << '\n';
        for (unsigned long j = 0; i < Bertha.wants_list.size(); j++) {
            std::cout << Bertha.wants_list[j].first << Bertha.wants_list[j].second << "t\n";
        }
        if (Bertha.alive == false) {
            return 0;
        }
    }
    std::cout << "yeah";
    return 0;
}
