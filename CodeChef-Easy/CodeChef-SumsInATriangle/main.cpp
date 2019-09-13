//
//  main.cpp
//  SumOfTriangle
//
//  Created by Mayan Bhadage on 8/5/19.
//  Copyright © 2019 Mayan Bhadage. All rights reserved.
//

#include <iostream>
#include <vector>

// This is bottom up approach

// Take the bottom triangle of 3 element ;
// Find the max of two numbers from bottom ;
// Add the max num to top element;
// Repeat;
//We will have our solution at top;

int maxSum(std::vector<std::vector<int>> &nums, int height)
{

    for(int i = height-1; i >= 1; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(nums[i][j] > nums[i][j+1])
            {
                nums[i - 1][j] += nums[i][j];
            }
            else
            {
                nums[i - 1][j] += nums[i ][j + 1];
            }
        }
    }

    return nums[0][0];
}

void printSize(std::vector<std::vector<int>> &nums)
{
    for(int i = 0; i < 3; i ++)
    {
        std::cout<<nums[i].size()<<std::endl;
    }
}

int main() {
    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
        int height;
        std::cin>>height;

        std::vector<std::vector<int>> nums(height);

        for (int i = 0; i < height; i++)
        {

            nums[i] = std::vector<int>(i+1);
            for(int j = 0; j <= i; j++)
            {
                int val;
                std::cin>>val;
                nums[i][j] = val;
            }
        }

        std::cout<<maxSum(nums,height)<<std::endl;
    }


    return 0;
}
