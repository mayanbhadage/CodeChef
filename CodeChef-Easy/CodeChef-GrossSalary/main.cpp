#include <iostream>
#include <iomanip>
double grossIncome(int salary)
{
    double gross = 0;
    if(salary < 1500)
    {
        double hra = 0.1 * salary;
        double da = 0.9 * salary;
        gross = salary + hra + da;
    }

    else
    {
        double hra = 500;
        double da = 0.98 * salary;
        gross = salary + hra + da;
    }
    return gross;
}

int main() {
    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
        int salary;
        std::cin>>salary;
        std::cout<<std::fixed<<std::setprecision(2);
        std::cout<<grossIncome(salary)<<std::endl;

    }

    return 0;
}