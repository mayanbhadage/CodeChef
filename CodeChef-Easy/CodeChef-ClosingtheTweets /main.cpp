#include <iostream>
#include<vector>
#include <sstream>

int result(std::vector<int> & temp)
{
    int count = 0;

    for(int x : temp)
    {
        if(x==1)
        {
            count ++;
        }
    }
    return count;
}


int main() {
    int numTweets=0;
    int numActions=0;
    std::cin>>numTweets>>numActions;

    std::vector<int> state (numTweets);

    std::fill(state.begin(), state.end(), 0);

    for(int i = 0; i < numActions; i++)
    {
        std::string action;
        int tweetNum;
        std::cin>>action;
        int tweetCount = 0;

        if(action == "CLICK")
        {
            std::cin>>tweetNum;

            if(state[tweetNum-1] == 0)
            {
                state[tweetNum -1] = 1;
            }
            else if(state[tweetNum-1] == 1)
            {
                state[tweetNum -1] = 0;
            }

            std::cout<<result(state)<<std::endl;
        }
        else if(action == "CLOSEALL")
        {
            std::fill(state.begin(), state.end(), 0);
            std::cout<<result(state)<<std::endl;;
        } else{
            std::cout<<"INVALID OPERATION"<<std::endl;
        }


    }




    return 0;
}