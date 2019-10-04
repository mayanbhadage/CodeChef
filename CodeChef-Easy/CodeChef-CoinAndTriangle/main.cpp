
//LINK https://www.codechef.com/problems/TRICOIN



#include <iostream>

int maxHeight(int num)
{
    if(num < 1)
    {
        return 0;
    }

    int height = -1;
    int temp = 1;
    int val = 0;
    while(num >= val)
    {
        val = val + temp;
        temp++;
        height++;
    }
    return height;
}

int main() {

    int numLines = 0;
    std::cin>>numLines;
     while(numLines--)
     {
         int num = 0;
         std::cin>>num;
         std::cout<<maxHeight(num)<<std::endl;
     }



    return 0;
}