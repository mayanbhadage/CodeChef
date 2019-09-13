#include <iostream>

typedef unsigned long  ulong;


ulong factorial(int num)
{
    if(num == 1 || num == 0)
    {
        return 1;
    }

    else
{
        return num * factorial(num -1);
}
}

int main() {
    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
        int num;
        std::cin>>num;
        std::cout<<factorial(num)<<std::endl;
    }

    return 0;
}