#include <iostream>
#include <windows.h>
#include "human.h"
#include <vector>

int main() {

    human Bertha;
    Bertha.born_sex = 1;

    for (int i = 0; i < 1000; i++) {
        Sleep(50);
        Bertha = humanLogic(&Bertha);
        std::cout << Bertha.hunger << '\t' << Bertha.thirst <<'\t' << Bertha.alive << '\n';
        if (Bertha.alive == false) {
            return 0;
        }
    }
    std::cout << "yeah";
    return 0;
}
