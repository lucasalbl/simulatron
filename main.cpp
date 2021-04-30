#include <iostream>
#include <thread>
#include <chrono>
#include "human.h"
#include <string>


int main() {

    human Bertha;
    Bertha.born_sex = 1;

    for (int i = 0; i < 1000; i++) {
        std::this_thread::sleep_for(std::chrono::milliseconds (50));
        Bertha = humanLogic(&Bertha);
        std::cout << Bertha.hunger << '\t' << Bertha.thirst <<'\t' << Bertha.alive << '\t' <<  Bertha.wants_list.size() << '\n';
        for (auto & j : Bertha.wants_list) {
            std::cout << j.first << j.second << "\n";
        }
        if ( !Bertha.alive ) {
            return 0;
        }
    }
    std::cout << "yeah";
    return 0;
}
