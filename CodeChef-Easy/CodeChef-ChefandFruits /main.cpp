#include <iostream>


void dosomestuff(int apple, int orange,int coin)
{
    while(coin --)
    {
        if(apple > orange)
        {
            orange++;
        }
        else if(apple < orange)
        {
            apple++;
        }

    }

    if (apple > orange) {
        std::cout << apple - orange << std::endl;
    }
    else
    {
        std::cout << orange - apple << std::endl;
    }
    }



int main() {
    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
        int apples,oranges,coins;
        std::cin>>apples>>oranges>>coins;

        dosomestuff(apples,oranges,coins);


    }
    return 0;
}