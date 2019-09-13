#include <iostream>
#include <vector>
#include <climits>




int findmins(std::vector<int> &nums)
{

    int temp = INT_MAX;
    int temp2 = INT_MAX;

    for(int i = 0; i < nums.size();i++)
    {
        if(nums[i]<temp)
        {
            temp = nums[i];
        }
    }

    for(int i = 0; i < nums.size();i++)
    {
        if(nums[i]<temp2 && nums[i]!=temp)
        {
            temp2 = nums[i];
        }
    }

    return (temp + temp2);
}

int main() {
    int numLines = 0;
    std::cin>>numLines;

    while (numLines--)
    {
        int count;
        std::cin>>count;

        std::vector<int> nums(count);


        for(int i = 0; i < count ; i++)
        {
            int value;
            std::cin>>value;
            nums[i] = value;
        }



std::cout<<findmins(nums)<<std::endl;



    }
    return 0;
}