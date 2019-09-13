#include <iostream>

char operation(int num1, int num2)
{
    if(num1 > num2 )
    {
        return '>';
    }
    else if(num1 < num2)
    {
        return '<';
    }
    else
    {
        return '=';
    }

}

int main() {

    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
        int num1, num2;

        std::cin>>num1;
        std::cin>>num2;

        std::cout<<operation(num1,num2)<<std::endl;
    }

    return 0;
}