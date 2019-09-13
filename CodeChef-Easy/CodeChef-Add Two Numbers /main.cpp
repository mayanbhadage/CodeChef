#include <iostream>
#include <vector>

int add(int a, int b)
{
    return a + b;
}

int main() {
    int numTestCases = 0;

    std::vector<int> results;

    std::cin>>numTestCases;

    while(numTestCases)
    {
        int num1,num2;
        std::cin>>num1;
        std::cin>>num2;

        int res = add(num1,num2);

        results.push_back(res);
        numTestCases --;
    }

    for(auto& result : results)
    {
        std::cout<<result<<std::endl;
    }

    return 0;
}