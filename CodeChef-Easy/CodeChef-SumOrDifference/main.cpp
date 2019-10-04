#include <iostream>

int calculate(int a,int b)
{
    return a > b ? (a-b) : (a+b) ;
}

int main() {


        int num1,num2;
        std::cin>>num1>>num2;

        std::cout<<calculate(num1,num2)<<std::endl;

    return 0;
}