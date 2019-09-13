#include <iostream>

int grade( double hardness,double carbon_content,double tensile_strength)
{

    bool hard = false;
    bool carbon = false;
    bool strength = false;


    if( (hardness > 50) )
    {
        hard = true;

    }
    if (carbon_content < 0.7)
    {
        carbon = true;
    }

    if((tensile_strength > 5600))
    {
        strength = true;
    }

    if(hard && carbon && strength)
    {
        return  10;
    }

    else if(hard)
    {
        if(carbon)
        {
            return 9;
        }
        else if(strength)
        {
            return 7;
        }
        else
        {
            return 6;
        }
    }
    else if(carbon)
    {
        if(strength)
        {
            return 8;
        } else{
            return 6;
        }
    }

    else if(strength)
    {

        return 6;

    }
    else
    {
        return 5;
    }



}


int main() {

    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
        double hardness, carbon_content,tensile_strength;
        std::cin>>hardness;
        std::cin>>carbon_content;
        std::cin>>tensile_strength;

        std::cout<<grade(hardness,carbon_content,tensile_strength)<<std::endl;

    }


    return 0;
}