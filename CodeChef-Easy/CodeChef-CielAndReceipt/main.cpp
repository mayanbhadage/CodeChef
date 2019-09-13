#include <iostream>
#include <math.h>

int minMenus(int (&items)[12] , int num)
{
    int menu_count = 0;
    while (num > 0)
    {
        for(int i = 11; i >= 0; i--)
        {
            if (num >= items[i] )
            {
                menu_count++;
                num = num - items[i];
                break;
            }
        }

    }

    return  menu_count;

}

int main() {

    int items[12];

    for (int i = 1; i <=12; i++ )
    {
        items[i -1] = (int) pow(2,i-1);
    }

    int numLines = 0;
    std::cin>>numLines;
while(numLines--)
{
    int num;
    std::cin>>num;

    std::cout<<minMenus(items,num)<<std::endl;
}





    return 0;
}