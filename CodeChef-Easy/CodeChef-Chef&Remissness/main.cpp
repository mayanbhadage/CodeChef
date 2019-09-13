#include <iostream>

struct Count{
    int guard1;
    int guard2;
};

Count minMax(int num1 , int num2)
{
    Count temp;

    if(num1 > num2)
    {
        temp.guard1 = num1;
        temp.guard2 = num1 + num2;
    } else
    {
        temp.guard1 = num2;
        temp.guard2 = num1 + num2;
    }

    return temp;
}

int main() {

    int numLines = 0;
    std::cin>>numLines;
    while(numLines --)
    {
      int num1,num2;
        std::cin>>num1;
        std::cin>>num2;

        Count guard;

        guard = minMax(num1,num2);

        std::cout<<guard.guard1<<" "<<guard.guard2<<std::endl;


    }



    return 0;
}