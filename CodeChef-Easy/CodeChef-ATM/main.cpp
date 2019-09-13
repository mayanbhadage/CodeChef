#include <iostream>
#include <iomanip>

int main() {

    int withdrawAmount ;
    double accountBalance ;

    std::cin>>withdrawAmount;
    std::cin>>accountBalance;

    float newBalance;

    newBalance = (accountBalance - withdrawAmount) - 0.50;

    if(withdrawAmount % 5 == 0 && newBalance > 0) {
        std::cout << std::fixed << std::setprecision(2) << newBalance << std::endl;
    }
    else{
        std::cout << std::fixed << std::setprecision(2) << accountBalance << std::endl;

    }

    return 0;
}