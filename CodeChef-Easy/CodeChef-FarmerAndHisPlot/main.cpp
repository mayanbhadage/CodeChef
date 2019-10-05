#include <iostream>
#include <algorithm>
#include <numeric>

long maxSquares(long long len, long long bre)
{
    long long area = len * bre;

    if(len ==0 || bre==0)
    {
        return 0;
    }
    long long res = 0;

     int g = std::gcd(len,bre);

     res = area / (g*g);

    return res;
}

int main() {


    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
        long long length,breadth;

        std::cin>>length>>breadth;

        std::cout<<maxSquares(length,breadth)<<std::endl;

    }

    return 0;
}