#include <iostream>

class ScoreBoard{
public:
    int playerA;
    int playerB;
    std::string Leader;
    int Lead;
    int cummA;
    int cummB;
    ScoreBoard()
        : playerA(0), playerB(0) , Leader("") ,Lead(0)
    {}

    void setPlayersScore(int A, int B)
    {
        playerA += A;
        playerB += B;
    }

    //*******************

    void setCumulative(int A, int B, int count ,const ScoreBoard score[]);



    //********************

    void findLeader()
    {
        if(cummA > cummB)
        {
            Lead = cummA - cummB;
            Leader = "PlayerA";
        }

        if(cummA < cummB)
        {
            Lead = cummB - cummA;
            Leader = "PlayerB";
        }

        if(playerA == playerB)
        {
            Lead = 0;
            Leader = "None";
        }


    }


};

void ScoreBoard::setCumulative(int A, int B, int count, const ScoreBoard *score) {

    if(count ==  0)
    {
        cummA = A;
        cummB = B;
    }
    else{
        cummA =  score[count - 1].cummA + A;
        cummB =  score[count - 1].cummB + B;
    }
}

void findWinner(const ScoreBoard scores[], int size)
{
    int maxLead = 0;
    int winner = 0;

    int temp = 0;

    for (int i = 0; i < size; i++) {

        if(scores[i].Lead > temp)
        {
            temp = scores[i].Lead;
        }

    }

    maxLead = temp;

    for (int i = 0; i < size; i++) {
        if(scores[i].Lead == maxLead)
        {
            if(scores[i].Leader == "PlayerA")
            {
                winner = 1;
            }
            else if(scores[i].Leader == "PlayerB")
            {
                winner = 2;
            }
            else
            {
                winner = 0;
            }


        }
    }

    std::cout<<winner<<" "<<maxLead;


}

int main() {

    int numLines = 0;
    int count = 0;
    std::cin>>numLines;
    ScoreBoard score[numLines];

    while (numLines)
    {
        int pA,pB;
        std::cin>>pA;
        std::cin>>pB;
        score[count].setPlayersScore(pA,pB);
        score[count].setCumulative(pA,pB,count,score);
        score[count].findLeader();
        count++;
        numLines--;
    }


findWinner(score,count);



    return 0;
}