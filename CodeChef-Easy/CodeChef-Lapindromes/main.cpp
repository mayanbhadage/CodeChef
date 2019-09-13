#include <iostream>

#include <cmath>

void lapindrome(std::string str)
{
    int middle =(int) floor(str.length())/2;
    std::string p1;
    std::string p2;
    if(str.length() % 2 == 0)
    {
         p1 = str.substr(0,middle);
         p2 = str.substr(middle,str.length());

    }
    else
    {
        p1 = str.substr(0,middle);
        p2 = str.substr(middle + 1,str.length());
    }

    int length = p1.length();
    while(length--)
    {
        int count1 = count(p1.begin(), p1.end(), p1[length]);
        int count2 = count(p2.begin(), p2.end(), p1[length]);

        if(count1 != count2)
        {
            std::cout<<"NO"<<std::endl;
            return;
        }

    }

    std::cout<<"YES"<<std::endl;


}



int main() {

    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
        std::string str;
        std::cin>>str;

        lapindrome(str);
    }

    return 0;
}