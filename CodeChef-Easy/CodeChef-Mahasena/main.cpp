#include <iostream>
#include<string>
#include <vector>

std::string countEvenOdd(std::vector<int> &nums)
{
    int evenCount = 0;
    int oddCount = 0;

    for(int num : nums)
    {
        if(num % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    if(evenCount > oddCount)
    {
        return "READY FOR BATTLE";
    }
    else
    {
        return "NOT READY";
    }
}


int main() {

    int numInput = 0;
    int index = 0;
    std::cin>>numInput;
    std::vector<int>numbers(numInput);

    while (numInput --)
    {
        int num;
        std::cin>>num;
        numbers[index] = num;
        index++;

    }

    std::cout<<countEvenOdd(numbers)<<std::endl;

    return 0;
}