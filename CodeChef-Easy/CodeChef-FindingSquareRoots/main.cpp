#include <iostream>

float squareRoot(int num)
{
    float sqrt = 0;

    while ((sqrt*sqrt) < num)
    {
        sqrt += 0.10;
    }

    return sqrt;
}



int main() {

    int numLines = 0;
    std::cin>>numLines;
    while (numLines --)
    {
        int num;
        std::cin>>num;
        std::cout<<(int)squareRoot(num)<<std::endl;

    }




    return 0;
}