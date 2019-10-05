// LINK: https://www.codechef.com/problems/FRGTNLNG


#include <iostream>
#include <vector>


struct Dict{

    std::string word;
    bool found;

};


void language(std::vector<Dict> & dict, std::vector<std::string> &phrase)
{
    for(int i = 0 ; i < dict.size(); i++)
    {
        if(!dict[i].found) // if not found
        {
            for(int j = 0; j < phrase.size(); j++)
            {
                if(dict[i].word == phrase[j])
                {
                    dict[i].found = true;
                }
            }
        }

    }
}


int main() {
    int numLines = 0;

    std::cin>>numLines;

    while(numLines--)
    {
        int N,K;
        std::cin>>N>>K;


        std::vector<Dict> dict (N);


        for(int i = 0; i < N; i++)
        {
            std::string str;
            std::cin>>str;
            dict[i].word = str;
            dict[i].found = false;
        }

        for(int i = 0; i < K; i++)
        {
            int L;
            std::cin>>L;
            std::vector<std::string> phrase(L);
            for(int j = 0 ; j < L; j++)
            {
               std::string str;
               std::cin>>str;
               phrase[j] = str;
            }

            language(dict,phrase);
         }


        for(auto value: dict)
        {
            if(value.found)
            {
                std::cout<<"YES ";
            }
            else
            {
                std::cout<<"NO ";
            }
        }

        std::cout<<std::endl;



    }
    return 0;
}