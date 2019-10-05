#include <iostream>
#include <vector>
#include <algorithm>

struct Doll
{
    int dollNum;
    int index;


};


int main() {
    int numLines = 0;
    std::cin>>numLines;

    while (numLines--)
    {
        int size;
        int result;
        std::cin>>size;

        std::vector<Doll> dolls (size);




        for(int i = 0; i < size; i++)
        {
            int num;
            std::cin>>num;

            dolls[i].dollNum = num;


        }

        for (int i = 0; i < dolls.size(); i++)
        {
            for (int j = 0; j < dolls.size(); j++)
            {
                if(i == j)
                {
                    continue;
                }
                else
                {
                    if(dolls[i].dollNum == dolls[j].dollNum)
                    {
                        dolls.erase(dolls.begin() + i);
                        dolls.erase(dolls.begin()+ (j-1));
                        i=0;
                        j=0;
                    }
                }

                if(dolls.size()==1)
                {
                    result = dolls[0].dollNum;
                }
            }


        }

        std::cout<<result<<std::endl;

    }


    return 0;
}