#include <iostream>
#include <vector>

// In this example we have to transform the expression into Reverse Polish Notion (RPN)

// Eg. a + b => a b +


class Expression
{
public:
    std::string exp;
    int numOpenBracket;
    int numClosedBracket;

    std::vector<char>operators;
    std::vector<char>operands;

    explicit Expression(std::string &exp)
    : exp(exp),numOpenBracket(0),numClosedBracket(0)
    {

    }

    void countBrac();

    int getIndexOB();
    int getIndexCB();

    void ReversePolishNotion();
    void shiftandResize(int index);
    void parse();
    bool isPresentOperator(const char ch);
    bool isPresentOperand(const char ch);

    void solveNormal(int,int,int,int,int);

    int getIndexOperator(int OB_Index, int CB_Index);// Some Logical problem in this



};

void Expression::countBrac() {
    int length = exp.length();
    for(int i = 0; i < length; i++)
    {
        if(exp[i] == '(')
        {
            numOpenBracket++;
        }
        if(exp[i] == ')')
        {
            numClosedBracket++;
        }
    }



}

int Expression::getIndexOB() {

    int length = exp.length();
    int openBracketTemp = -1;
    for(int i = 0; i < length; i++)
    {
        if(exp[i] == '(')
        {
            if(i > openBracketTemp)
            {
                openBracketTemp = i;
            }
        }


    }


    return openBracketTemp;

}

int Expression::getIndexCB() {


    int OBindex = getIndexOB();

    int length = exp.length();
    int closeBracketTemp = -1;
    for(int i = 0; i < length; i++)
    {
        if(exp[i] == ')')
        {
            if(i > closeBracketTemp && i > OBindex)
            {
                closeBracketTemp = i;
                break;
            }
        }


    }

    return  closeBracketTemp;
}



void Expression::ReversePolishNotion() {

    while(numOpenBracket--)
    {
        int openBIndex = getIndexOB();
        int closeBIndex = getIndexCB();
        int operatorIndex = getIndexOperator(openBIndex,closeBIndex);
        int operand1Index = openBIndex + 1;
        int operand2Index = operatorIndex + 1;



        solveNormal(openBIndex,closeBIndex,operand1Index,operatorIndex,operand2Index);
    }



}

void Expression::solveNormal(int openBIndex, int closeBIndex,int operand1Index, int operatorIndex, int operand2Index) {


    shiftandResize(openBIndex);

    // std::cout<<exp<<std::endl;
    operand1Index--;
    operatorIndex--;
    operand2Index--;
    closeBIndex--;


    char temp =exp[operatorIndex];

    if(operand2Index == (closeBIndex - 1))
    {
        exp[operatorIndex] = exp[operand2Index];

        exp[operand2Index] = temp;

        shiftandResize(closeBIndex);
    }

    else{
            shiftandResize(operatorIndex);
            exp[closeBIndex - 1] = temp;
    }




}

void Expression::parse() {

    for(int i = 0; i < exp.length();i++)
    {
        if(!std::isalnum(exp[i]) && exp[i] != '(' && exp[i] != ')' && !(isPresentOperator(exp[i])) )
        {
            operators.push_back(exp[i]);
        }

        if(std::isalpha(exp[i]) && !(isPresentOperand(exp[i])))
        {
            operands.push_back(exp[i]);
        }

    }

}

bool Expression::isPresentOperator(const char ch) {
    bool isP = false;

    for(auto x : operators)
    {
        if(ch == x)
        {
            isP = true;
            break;
        }
    }
    return isP;
}

bool Expression::isPresentOperand(const char ch) {

    bool isP = false;

    for(auto x : operands)
    {
        if(ch == x)
        {
            isP = true;
            break;
        }
    }
    return isP;

}

int Expression::getIndexOperator(int OB_Index, int CB_Index) {

    for(int  i = OB_Index ; i < CB_Index;i++ )
    {
        if(isPresentOperator(exp[i])&& isPresentOperand(exp[i+1]))
            return i;
    }
}

void Expression::shiftandResize(int index) {

    for(int i = index ; i < exp.length(); i++ )
    {
        exp[i] = exp[i+1];
    }
    exp.resize(exp.length() -1);

}


int main() {

    int numLines = 0;
    std::cin>>numLines;

    while(numLines--)
    {
        std::string input;
        std::cin>>input;

        Expression e = Expression(input);
        e.parse();

        e.countBrac();

        e.ReversePolishNotion();

        std::cout<<e.exp<<std::endl;
    }



    return 0;
}
