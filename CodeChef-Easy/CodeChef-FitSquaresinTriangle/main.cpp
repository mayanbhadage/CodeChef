#include <iostream>




int maxSquare(int base) {

    base = base -2;

    base = base/2;

    return base * (base + 1)/2;

}


int max(int base)
{
    int count = 0;
    while (base > 2)
    {
        count = count + (int)(base-2)/2;
        base = base - 2;
    }

    return  count;
}

int main() {

    int numLines = 0;
    std::cin>>numLines;

    while(numLines --)
    {
        int num;
        std::cin>>num;
        std::cout<<max(num)<<std::endl;
    }


    return 0;
}