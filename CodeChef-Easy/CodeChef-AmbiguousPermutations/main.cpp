#include <iostream>
#include <vector>

void perm(std::vector<int> &num)
{
    int size = num.size();

    bool ambiguous = true;
    std::vector<int>another(size); //Create another vector of same size of num

    for(int i = 0; i < size;i++)
    {
        another[num[i] - 1] = i+1;
    }

    for(int i = 0; i < size ;i++)
    {
        if(another[i]!=num[i])
        {
            ambiguous = false;
        }
    }

    if(ambiguous)
    {
        std::cout<<"ambiguous"<<std::endl;

    } else
    {
        std::cout<<"not ambiguous"<<std::endl;
    }
}



int main() {

    while(true)
    {
        int num;
        std::cin>>num;
        if(num == 0)
        {
            break;
        }

        std::vector<int> values (num);

        for(int & value : values)
        {
            int val;
            std::cin>>val;

            value = val;
        }

        perm(values);
    }


    return 0;
}