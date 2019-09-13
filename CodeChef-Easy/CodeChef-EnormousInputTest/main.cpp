#include <iostream>


int main() {

    int numlines = 0;
    int num = 0;

    std::cin>>numlines;
    std::cin>>num;
    int count = 0;
    while(numlines > 0)
    {
        int num1;
        std::cin>>num1;
        if((num1  % num) == 0)
        {
            count++;
        }
        numlines--;
    }

    std::cout<<count;

    return 0;
}