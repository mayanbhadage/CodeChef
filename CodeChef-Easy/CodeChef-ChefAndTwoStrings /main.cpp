#include <iostream>
void Chef(std::string str1,std::string str2)
{
    int length = str1.length();
    int min = 0;
    int max = 0;
// Check for min
    for(int i = 0; i <= length;i++)
    {
        if(str1[i] != '?')
        {
            if(str2[i] != '?')
            {
                if(str1[i] != str2[i])
                {
                    min++;
                    max++;
                }
            }
            else{
                max++;
            }
        }
        else{
            max++;
        }

    }

    std::cout<<min<<" "<<max<<std::endl;
}
int main() {

    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
        std::string str1;
        std::string str2;
        std::cin>>str1;
        std::cin>>str2;
        Chef(str1,str2);
    }
    return 0;
}