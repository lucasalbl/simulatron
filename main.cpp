#include <iostream>
#include <windows.h>
#include "human.h"

int main() {

    human Bertha;

    for (int i = 0; i < 1000; i++) {
        Sleep(50);
        Bertha = tickHunger(&Bertha);
        Bertha = tickDeath(&Bertha);
        std::cout << Bertha.hunger << ' ' << Bertha.alive << '\t';
    }
    std::cout << "yeah";
    return 0;
}
