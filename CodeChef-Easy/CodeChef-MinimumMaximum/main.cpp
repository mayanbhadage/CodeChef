#include <iostream>
#include <vector>
#include <algorithm>



int cost(std::vector<int> &array)
{

//Find the minimum element in the array;


int min_value = *std::min_element( std::begin(array), std::end(array));

    int it = find(array.begin(),  array.end(), min_value) - array.begin();

   // std::cout<<it<<std::endl;






    int cost = 0;
    while(array.size() != 1)
    {

        if(it == array.size()-1){


            if(array[it]<array[it-1])
            {
                cost += array[it];
                array.erase(array.begin()+(it-1));

            }
            else{
                cost+=array[it-1];
                array.erase(array.begin()+(it));

            }
        }
        else
        {
            if(array[it]<array[it+1])
            {
                cost += array[it];
                array.erase(array.begin()+(it+1));

            }
            else{
                cost+=array[it+1];
                array.erase(array.begin()+(it));

            }
        }

        it = find(array.begin(),  array.end(), min_value) - array.begin();


    }

    return cost;
}



long long cost2(std::vector<int> &array)
{
    int min_value = *std::min_element( std::begin(array), std::end(array));

   // int it = find(array.begin(),  array.end(), min_value) - array.begin();


    long long cost = min_value * (array.size()-1);


    return cost;
}



int main() {


    int numLines = 0;
    std::cin>>numLines;
    while(numLines--)
    {
        int numElements=0;
        std::cin>>numElements;
        std::vector<int> nums(numElements);

        for(int i = 0 ; i < numElements;i++)
        {
            int num;
            std::cin>>num;
            nums[i]=num;
        }
        std::cout<<cost2(nums)<<std::endl;

    }




    return 0;
}