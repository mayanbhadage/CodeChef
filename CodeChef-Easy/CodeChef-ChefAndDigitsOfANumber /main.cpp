#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>


int main() {

    int numLines = 0;
    std::cin>>numLines;

    while(numLines--) {
        std::string s_num;
        std::cin>>s_num;

        std::vector<int> digits;

        for(int i = 0; i < s_num.length(); i++)
        {
            std::string temp = std::string(s_num,i,1);
            int num = std::stoi(temp);

            digits.push_back(num);
        }



        int count_0 = std::count(digits.begin(),digits.end(),0);
        int count_1 = std::count(digits.begin(),digits.end(),1);

       // int diff = (abs(count_0-count_1));


        if(count_0 == 1 || count_1 == 1)
        {
            std::cout<<"Yes"<<std::endl;
        }
        else
        {
            std::cout<<"No"<<std::endl;
        }

    }


    return 0;
}