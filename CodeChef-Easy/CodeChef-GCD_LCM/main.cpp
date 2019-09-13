#include <iostream>

long long int min(long long int a, long long int b)
{
    return a <= b ? a : b;
}

long long int max(long long int a, long long int b)
{
    return a <= b ? b : a;
}

void lcm_gcd(long long int num1,long long int num2,long long int &lcm, long long int &gcd)
{
    if(num1 == 0 || num2 == 0)
    {
        gcd = max(num1,num2);
        lcm = min(num1,num2);
        return;
    }

    int x = min(num1,num2); // min of two nums
    for(int i = x; i >= 1; i--)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd = i;
            break;
        }
    }

//    int max1 = max(num1,num2);
//    for(int i = 1; i <= num2; i++)
//    {
//        for (int j = 1; j <= num1; j++)
//        {
//            if((num1 * i) == (num2 *j)) {
//                lcm = num1 * i;
//                return;
//            }
//        }
//    }

lcm = (num1 * num2) / gcd;

}


int main() {
    int numLines = 0;
    std::cin>>numLines;

    while (numLines--) {
        long long int num1,num2;

        long long int lcm = 0;
        long long int gcd = 0;

        std::cin >> num1;
        std::cin>>num2;

        lcm_gcd(num1,num2,lcm,gcd);
        std::cout<<gcd<<" "<<lcm<<std::endl;
    }
    return 0;
}