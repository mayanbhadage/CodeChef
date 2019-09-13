#include <iostream>

typedef long long int ll_int;
ll_int sumN(ll_int N)
{
    if (N < 0)
    {
        return 0;
    } else{
        return N + sumN(N-1);
    }
}

ll_int sumDN(ll_int D, ll_int N)
{
    ll_int val = sumN(N);

    while(D>=2)
    {
        val = sumN(val);
        D--;
    }

    return val;
}


int main() {
    int numLines = 0;
    std::cin>>numLines;

    while (numLines--)
    {
        ll_int D,N;
        std::cin>>D;
        std::cin>>N;

        std::cout<<sumDN(D,N)<<std::endl;


    }

    return 0;
}