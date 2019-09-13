#include <iostream>
void servant(int num)
{
    if(num < 10)
    {
        std::cout<<"What an obedient servant you are!"<<std::endl;
    }
    else
    {
        std::cout<<"-1"<<std::endl;
    }
}
int main() {

    int numLines;
    std::cin>>numLines;

    while(numLines--)
    {
        int num;
        std::cin>>num;

        servant(num);
    }

    return 0;
}