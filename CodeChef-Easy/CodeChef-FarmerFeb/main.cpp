#include <iostream>
#include <math.h>
// LINK : https://www.codechef.com/problems/POTATOES

bool isPrime(int num)
{
    bool prime = true;
    for(int i = 2; i <= sqrt(num);i++ )
    {
        if(num % i == 0)
        {
            prime = false;
        }
    }
    return prime;

}

int prime(int num1, int num2)
{
    const int temp = num1 + num2;
    int sum = num1 + num2;

    if(sum < 2 )
        return 2;
    int result;
    bool primeNum = false;

    while(true)
    {
        sum += 1;
        if(isPrime(sum))
        {
            result=sum;
            break;
        }
    }
    return result-temp;
}
int main() {

    int numLines = 0;
    std::cin>>numLines;
    while(numLines--)
    {
        int num1,num2;
        std::cin>>num1>>num2;
        std::cout<<prime(num1,num2)<<std::endl;
    }
    return 0;
}