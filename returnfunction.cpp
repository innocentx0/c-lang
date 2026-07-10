#include <iostream>
#include <stdlib.h>


int level {1000}; //we declare an initialized int giving a value of 1000

int getPlayerLevel(){
    int player_level{}; 
    std::cout << "Please insert your current level" << "\n" << std::endl;
    std::cin >> player_level;
    std::cout << "Your current level is" << " " << player_level;
    return player_level; //So that when we will call getPlayerLevel() , it will return the user input
}

void calculateEnd(int actual_level){
    std::cout << "You need to level up for " << level - actual_level << " " << "times before you reach the end" << "\n";

}

int main(){
//This needs to calcuate data parsed from another function, we can doing it by using a returning function like so.
    int actual_level{getPlayerLevel()}; //We initialize a
    calculateEnd(actual_level);
    return 0;
}
