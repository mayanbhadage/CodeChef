#include <iostream>

int sumFL(int num)
{
    int first;
    int last;

    first = num % 10;
    if(num/10 == 0)
    {
        return first;
    }

    while((num/10) !=0)
    {
        num = num / 10;
    }
    last = num;
    return first + last;
}

int main() {

    int numLines = 0;
    std::cin>>numLines;

    while(numLines)
    {
        int num;
        std::cin>>num;
        std::cout<<sumFL(num)<<std::endl;
        numLines--;
    }

    return 0;
}