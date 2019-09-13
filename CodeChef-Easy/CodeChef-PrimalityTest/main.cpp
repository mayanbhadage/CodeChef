#include <iostream>
#include <string>
#include <cmath>

std::string prime(int num)
{
    int x = ceil(num/2);
    bool prime = true;

    for (int i = 2; i <= x ; i++)
    {
        if( num % i == 0)
        {
            prime = false;
        }
    }

    if(prime)
    {
        return "yes";
    }
    else
    {
        return "no";
    }
}

int main() {

int numLines = 0;
std::cin>>numLines;
while(numLines--)
{
    int num;
    std::cin>>num;
    std::cout<<prime(num)<<std::endl;
}


    return 0;
}