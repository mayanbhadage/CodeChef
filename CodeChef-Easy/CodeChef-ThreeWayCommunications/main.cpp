#include <iostream>
#include <math.h>
struct Positions{
    int x;
    int y;
};

double square(int x)
{
    return x * x;
}


void distance (Positions p[],int range)
{

    // Dist Chef and Head Server

    double dist_C_H = sqrt(square(p[0].x - p[1].x) + square(p[0].y - p[1].y));

    double dist_C_S = sqrt(square(p[0].x - p[2].x) + square(p[0].y - p[2].y));

    double dist_H_S = sqrt(square(p[1].x - p[2].x) + square(p[1].y - p[2].y));

    if(dist_C_H <= range)
    {
        if(dist_C_S <= range)
        {
            std::cout<<"yes"<<std::endl;
        }
        else if(dist_H_S <= range)
        {
            std::cout<<"yes"<<std::endl;
        }
        else
        {
            std::cout<<"no"<<std::endl;
        }

    }
    else if(dist_C_S <= range && dist_H_S <= range)
    {
        std::cout<<"yes"<<std::endl;
    }
    else
    {
        std::cout<<"no"<<std::endl;
    }

}



int main() {

    int numLines = 0;
    std::cin>>numLines;
    int count = 0;

    while(numLines--)
    {
        Positions p[3];
        int range;
        std::cin>>range;


        for(int i = 0; i < 3; i++)
        {
            int x,y;

            std::cin>>x;
            std::cin>>y;
            p[i].x = x;
            p[i].y = y;

        }

        distance(p,range);

    }


    return 0;
}