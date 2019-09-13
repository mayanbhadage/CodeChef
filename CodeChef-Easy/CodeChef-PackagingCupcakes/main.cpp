#include <iostream>


void maxCupCake(int num, int &package_size,int &leftOvers)
{


    for(int i = 2; i <= (num/2) + 1 ;i++)
    {
        if((num % i) > leftOvers)
        {
            leftOvers = num % i;
            package_size = i;
        }
    }

}



int main() {


    int numLines = 0;
    std::cin>>numLines;

    while(numLines)
    {

        int num;
        std::cin>>num;
        std::cout<<(num/2) + 1<<std::endl;
        numLines--;
    }
    return 0;
}