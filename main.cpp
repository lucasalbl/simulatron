#include <iostream>
#include <windows.h>
#include "human.h"

int main() {

    human Bertha;
    Bertha.born_sex = 1;

    for (int i = 0; i < 1000; i++) {
        Sleep(50);
        Bertha = humanTick(&Bertha);
        std::cout << Bertha.hunger << ' ' << Bertha.alive << '\t';
    }
    std::cout << "yeah";
    return 0;
}
