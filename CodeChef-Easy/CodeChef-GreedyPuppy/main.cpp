#include <iostream>

int smartDog(int n , int k)
{
    int temp = 0;
    int val = 0;

    for (int i = 1; i <= k;i++)
    {
        if(n % i > temp)
        {
           temp = n % i;
           val = i;
        }
    }

    return temp;
}

int main() {

    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
        int n,k;
        std::cin>>n;
        std::cin>>k;


        std::cout<<smartDog(n,k)<<std::endl;
    }

    return 0;
}