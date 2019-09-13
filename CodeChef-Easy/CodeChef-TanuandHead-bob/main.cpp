#include <iostream>
#include <string>

std::string headBob(std::string &str)
{
    int I = 0;
    int Y = 0;
    int N = 0;


    for(int i = 0; i < str.length();i++)
    {
        if(str[i]== 'I')
        {
            I++;
        }

        if(str[i]== 'Y')
        {
            Y++;
        }

        if(str[i]== 'N')
        {
            N++;
        }
    }

    if(I > 0)
    {
        return "INDIAN";
    }
    else
    {
        if(Y > 0)
        {
            return "NOT INDIAN";
        }

        else
        {
            return "NOT SURE";
        }
    }

}

int main() {

    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
        int num;
        std::cin>>num;
        std::string input;
        std::cin>>input;


        std::cout<<headBob(input)<<std::endl;
    }

    return 0;
}