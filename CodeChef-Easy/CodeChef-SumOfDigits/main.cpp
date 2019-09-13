#include <iostream>

int sumOfDigits(int num)

{
    int sum = 0;
    while((num%10)!= 0 || num/10 != 0 )
    {
        sum = sum + (num % 10);

        num = num/10;


    }

    return sum;
}

int main() {

    int numLines = 0;
    std::cin>>numLines;
    while(numLines)
    {

        int num;
        std::cin>>num;
        std::cout<< sumOfDigits(num)<<std::endl;
        numLines--;
    }

    return 0;
}