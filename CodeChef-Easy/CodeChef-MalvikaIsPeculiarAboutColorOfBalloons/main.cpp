#include <iostream>


int paint(std::string &str)
{
    int count_a = 0;
    int count_b = 0;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == 'a')
        {
            count_a ++;
        }
        else
        {
            count_b++;
        }
    }

    if(count_a > count_b)
    {
        return count_b;
    } else
        return count_a;
}

int main() {
    int numLines = 0;

    std::cin>>numLines;

    while(numLines--)
    {
        std::string str;
        std::cin>>str;

        std::cout<<paint(str)<<std::endl;
    }
    return 0;
}