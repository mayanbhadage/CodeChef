#include <iostream>
#include <vector>



int calc(std::vector<int> &slots, std::vector<int> &req)
{
    int count = 0;

    for(int i = 0; i < slots.size()-1; i++)
    {
        int diff = slots[i+1] - slots[i];

        if(diff >= req[i])
        {
            count ++;
        }
    }



    return count;
}

int main() {

    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
        int num;
        std::cin>>num;
        std::vector<int> slots(num+1);
        std::vector<int> time_required(num);

        for(int i = 1; i < slots.size(); i++)
        {
            int temp;
            std::cin>>temp;

            slots[i] = temp;

        }
        for(int i = 0; i < num; i++)
        {
            int temp;
            std::cin>>temp;
{}
            time_required[i] = temp;

        }


std::cout<<calc(slots,time_required)<<std::endl;



    }
    return 0;
}