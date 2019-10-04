//LINK: https://www.codechef.com/problems/ICPC16A

#include <iostream>

struct Position
{
    int x,y;

    explicit Position(int x = 0,int y = 0): x(x),y(y)
    {

    }
};


std::string getDirection(Position &robot,Position &home)
{

    if(robot.x == home.x)
    {
        if(robot.y > home.y)
        {
            return "down";
        }
        else
        {
            return "up";
        }
    }
    else if(robot.y == home.y)
    {
        if(robot.x > home.x)
        {
            return "left";
        } else
        {
            return "right";
        }


    } else
    {
        return "sad";
    }
}

int main() {
    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
        int x1,y1,x2,y2;
        std::cin>>x1>>y1>>x2>>y2;

        Position robot(x1,y1);
        Position home(x2,y2);


        std::cout<<getDirection(robot,home)<<std::endl;


    }
    return 0;
}