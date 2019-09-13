#include <iostream>
#include <array>

//int secondLargest(std::array<int,3>arr)
//{
// std::sort(arr.begin(),arr.end());
//
// return arr[1];
//
//
//
//}

int secondLargestAlt(int num1, int num2, int num3)
{
    if ((num1 > num2) && (num1 > num3))
    {
        if(num2 > num3)
        {
            return num2;
        }
        else
        {
            return num3;
        }

    }

    if((num2 > num1) && (num2 > num3))
    {
        if(num1 > num3)
        {
            return num1;
        }
        else
        {
            return num3;
        }
    }

    if((num3>num1)&&(num3>num2))
    {
        if(num1>num2)
        {
            return num1;
        }
        else
        {
            return num2;
        }
    }


}


int main() {

    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
       // std::array<int,3> arr;

        int num1,num2,num3;
        std::cin>>num1;
        std::cin>>num2;
        std::cin>>num3;

//        arr[0] = num1;
//        arr[1] = num2;
//        arr[2] = num3;

       // std::cout<<secondLargest(arr)<<std::endl;

        std::cout<<secondLargestAlt(num1,num2,num3)<<std::endl;
    }



    return 0;
}