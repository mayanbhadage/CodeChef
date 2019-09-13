#include <iostream>
#include <stack>
#include <string>
#include <vector>

struct Priority
{
    char opera[5] = {'^','*','/','+','-'};
    int prio [5] = {3,2,2,1,1};
};

class Expression{
public:
    std::string exp;
    std::stack<char> s_operator;
    std::vector<char> final;



    Expression(std::string &input)
    : exp(input)
    {
    }

    bool isOperator(const char ch)
    {
        Priority p;
        for(int i = 0; i < 5 ;i++)
        {
            if(ch == p.opera[i])
            {
                return true;
            }
        }
        return false;
    }


    int getPriority(const char oper)
    {
        Priority p;
        for(int i = 0 ; i < 5; i++)
        {
            if(oper == p.opera[i])
            {
                return p.prio[i];
            }
        }

    }
    void postfix();

    void display()
    {
        for(char c: final)
        {
            std::cout<<c;
        }

        std::cout<<std::endl;
    }

};

void Expression::postfix() {

    bool OB_flag = false;
    for (int i = 0; i < exp.length();i++)
    {
        if(exp[i] == '(')
        {
            s_operator.push(exp[i]);
            OB_flag = true;
        }

        if(std::isalpha(exp[i]))
        {
            final.push_back(exp[i]);
        }

        if(isOperator(exp[i]))
        {
                int stackTopPriority = getPriority(s_operator.top());
                int elementPriority = getPriority(exp[i]);

                if(elementPriority >= stackTopPriority)
                {
                    char temp = s_operator.top();

                    s_operator.pop();
                    final.push_back(temp);
                }
                else
                {
                    s_operator.push(exp[i]);
                }
        }

        if(exp[i]==')'&& OB_flag)
        {
            char temp = s_operator.top();
            s_operator.pop();
            final.push_back(temp);
            s_operator.pop();
        }

    }

}


int main() {

    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
        std::string input;
        std::cin>>input;

        Expression exp(input);

        exp.postfix();
        exp.display();
    }





    return 0;
}