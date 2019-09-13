#include <iostream>

void wildCard(std::string &str1,std::string &str2)
{
    bool same = true;
  int length = str1.length();

  for (int i = 0; i <= length;i++)
  {
        if(str1[i] != '?')
        {
            if(str2[i] != '?')
            {
                if(str1[i] != str2[i])
                {
                    same = false;
                }
            }

        }
  }

  if(same)
  {
      std::cout<<"Yes"<<std::endl;
  }
  else
  {
      std::cout<<"No"<<std::endl;
  }

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

        wildCard(str1,str2);
    }
    return 0;
}