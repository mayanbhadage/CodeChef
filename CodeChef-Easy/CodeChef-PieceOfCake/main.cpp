#include <iostream>
#include <map>
//LINK : https://www.codechef.com/problems/LCH15JAB



void cake(std::string &str)
{
    int temp = 0;
    int sum = 0;
    std::map<char,int> freq;

    for(int i = 0; i < str.length();i++)
    {
        freq[str[i]]++;
    }

    for(auto value: freq)
    {
        if (value.second > temp)
        {
            temp = value.second;
        }
        sum = sum + value.second;
    }


    if(temp == (sum-temp))
    {
        std::cout<<"YES"<<std::endl;

    }
    else
    {
        std::cout<<"NO"<<std::endl;
    }
}


int main() {
    int numLines = 0;
    std::cin>>numLines;
    while(numLines--)
    {
        std::string str;
        std::cin>>str;

        cake(str);

    }
    return 0;
}