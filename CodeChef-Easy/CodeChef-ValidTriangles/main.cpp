#include <iostream>

 const char * validTriangle(int num1, int num2, int num3)
 {
    if((num1+num2+num3)==180)
    {
        return"YES";
    } else
    {
        return "NO";
    }
 }

int main() {

    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
        int num1, num2 , num3;

        std::cin>>num1;
        std::cin>>num2;
        std::cin>>num3;

        std::cout<<validTriangle(num1,num2,num3)<<std::endl;
    }

    return 0;
}