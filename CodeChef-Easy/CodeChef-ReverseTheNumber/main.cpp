#include <iostream>
#include <math.h>
int reverseNum(int num)
{
    int temp[100];
    int count = 0;
    while((num/10 != 0) || (num%10 !=0 ))
    {
        temp[count] = num % 10;

        num = num/10;

        count++;
    }

    int result = 0;

    int count2 = count - 1 ;
    for(int i = 0; i < count ; i++)
    {
        result += (temp[i] * (int)pow(10,count2)) ;
        count2--;
    }
    return  result;

}

int main() {

    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
        int num;
        std::cin>>num;

        std::cout<<reverseNum(num)<<std::endl;
    }

    return 0;
}