#include <iostream>

long long int max(long long int a, long long int b)
{
    return a > b ? a : b;
}

long long int gcd (long long int a,long long int b)
{
    if(a == 0 || b == 0)
    {
        return max(a,b);
    } else
    {
        return gcd(b,a%b);
    }
}

long long int lcm (long long int a,long long int b)

{
    return (a*b)/gcd(a,b);
}

int main() {

int numLines = 0;
std::cin>>numLines;

while(numLines--)
{
    int num1,num2;

    std::cin>>num1;
    std::cin>>num2;

    std::cout<<gcd(num1,num2)<<" "<<lcm(num1,num2)<<std::endl;
}
    return 0;
}