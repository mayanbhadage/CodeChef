#include <iostream>

unsigned long long countFour(unsigned long long num)
{
    unsigned long long count = 0;
    while(num/10 != 0 || (num % 10) != 0)
    {
        if(num%10 == 4)
        {
            count++;
        }

        num = num / 10;
    }

    return count;
}

int main() {
    unsigned long long numLines = 0;
    std::cin>>numLines;

    while(numLines --)
    {
        unsigned long long num;
        std::cin>>num;
        std::cout <<countFour(num)<< std::endl;
    }


    return 0;
}