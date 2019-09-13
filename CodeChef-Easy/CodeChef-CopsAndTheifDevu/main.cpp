#include <iostream>
#include <vector>
#include <array>

void helpThief(int speed, int time,std::vector<int> &house_numbers)
{
    std::array<int,101> houses;
    houses.fill(1);
    houses[0] = -1;
    int count = 0;

   for(int cop:house_numbers)
   {
       houses[cop] = 0;

       int cop_lower = cop - (speed*time);
       int cop_upper = cop + (speed * time);

       if (cop_lower < 1)
       {
           cop_lower = 1;
       }
       if(cop_upper > 100)
       {
           cop_upper = 100;
       }

       for(int i = cop_lower; i <= cop_upper; i++)
       {
           houses[i] = 0;
       }



   }
    for(int x : houses)
    {
        if(x == 1)
        {
            count++;
        }
    }

   std::cout<<count<<std::endl;

}

int main() {

    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
       int numHouse,speed,time;
       std::cin>>numHouse>>speed>>time;

       std::vector<int> house_numbers(numHouse);

       for(int i = 0; i < numHouse;i++)
       {
           int house;
           std::cin>>house;
           house_numbers[i] = house;
       }


       helpThief(speed,time,house_numbers);

    }



    return 0;
}