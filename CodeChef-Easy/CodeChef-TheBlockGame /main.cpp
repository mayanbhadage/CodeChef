#include <iostream>
#include<string>
#include<math.h>
int numDigits(int num);
std::string palindrome(int num)
{
    int temp = num;
    int i = numDigits(temp);
    int rev = 0;
    while(num%10 != 0 || num/10 !=0 )
    {
        i--;
        int x = num % 10;
        rev = rev + (x * pow(10,i));
        num = num/10;
     }

    if(rev == temp)
    {
        return "wins";
    }
    else
    {
        return "losses";
    }
}

int numDigits(int num)
{
    int count = 0;

    while(num%10 != 0 || num/10 !=0 )
    {
        num  = num /10;
        count ++;
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

      std::cout<<palindrome(num)<<std::endl;
  }

    return 0;
}