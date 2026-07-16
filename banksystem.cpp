#include <iostream>


double currentBalance = 0;
double userAmount = 0;

void deposit(){
  

    std::cout << "[OK] Deposit service:\n"; 
    std::cout << "Amount:\n";

    std::cin >> userAmount;

    currentBalance = currentBalance + userAmount;
    
    std::cout << userAmount << "$" << " added to your portfolio\n";
    
}

void withdraw(){
    std::cout << "[Ok] Withdraw service:\n";
     
    std::cout << "[OK] Deposit service:\n"; 
    std::cout << "Amount:";

    std::cin >> userAmount;

    if (userAmount <= currentBalance){

        currentBalance = currentBalance - userAmount;
    
        std::cout << userAmount << "$" << " withdraw from your portfolio\n";
    }
    else {
        std::cout << "You don't have enough money\n";
    }
}
    
    
    






int main(){
    int userInput;

    std::cout << "****BANK ACCOUNT******\n";
    std::cout << "select a service\n";
    std::cout << "1. deposit\n2. withdraw\n";
    
    std::cin >> userInput;

    switch(userInput){
        case 1:
            deposit();
            break;
        case 2:
            withdraw();
            break;
    }

    std::cout << "Wallet: " << currentBalance << "$\n";
    main();
}
