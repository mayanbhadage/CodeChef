#include <iostream>
const int size  = 6;
const int notes[size] = {1,2,5,10,50,100};

int smallestNotes(int num)
{
    int count = 0;
    for(int i = size -1 ; i > -1; i -- )
    {
        if(num >= notes[i])
        {
          int remender = num % notes[i];
          int quotent = num / notes[i];
          count += quotent;

          num = remender;
        }
    }
 return count;
}
int main() {
    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
        int num;
        std::cin>>num;

        std::cout<<smallestNotes(num)<<std::endl;
    }

    return 0;
}