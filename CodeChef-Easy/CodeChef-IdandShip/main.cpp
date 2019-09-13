#include <iostream>

std::string display (const char ID)
{
    if(ID == 'B'|| ID =='b')
    {
        return "BattleShip";
    }
    else if(ID == 'C'|| ID =='c')
    {
        return "Cruiser";
    }
    else if(ID == 'D'|| ID =='d')
    {
        return "Destroyer";
    }
    else if(ID == 'F'|| ID =='f')
    {
        return "Frigate";
    } else
    {
        return "";
    }
}

int main() {
    int numLines = 0;
    std::cin>>numLines;

    while (numLines--)
    {
        char id;
        std::cin>>id;

        std::cout<<display(id)<<std::endl;
    }

    return 0;
}