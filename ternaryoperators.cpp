#include <iostream>

// Ternary operator (Instead of using classic if statement, we can use operator like this)

int main(){
    int age;
    std::cout << "What's your age?" ;
    std::cin >> age;
    age <= 18 ? std::cout << "you cannot join!" : std::cout << "You can join";  
  //Is age equale or less then age? then print the first line, otherwise (else), the second one

    return 0;

}
