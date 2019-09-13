#include <iostream>
#include <vector>


int array[200];

int  store(int num)
{
    // This is the logic to store the number in array

    // the number eg 45 is stored in array as |5|4| in array
    int count = 0;

    while((num%10) != 0 ||(num/10)!=0)
    {
        array[count] = (num % 10);
        num = num/10;

        count ++;
    }
    return  count;
}


int  factorial(int arrSize, int num)
{
    // Logic to multiply number with our array;
    //and store result to same array

    for (int k = num - 1;k > 0 ; k--)
    {
        int temp = 0;
        for(int i = 0 ; i < arrSize;i++)
        {
            unsigned long long x = array[i] * k + temp;

            array[i] = x % 10;

            temp = x / 10;
        }

        if(temp!= 0)
        {
            while(temp!=0)
            {
                array[arrSize] = temp % 10;
                temp = temp/10;
                arrSize ++;
            }
        }}


    return arrSize;

}




int main() {

    int numLines;
    std::cin>>numLines;

  //  std::vector<unsigned long long> results;


    while (numLines)
    {
        int num;
        std::cin>>num;

        int size;
        size = store(num);

        size = factorial(size,num);

        for (int i = size - 1 ; i >= 0; i--)
        {
            std::cout<<array[i];
            array[i] = 0;

        }
        std::cout<<std::endl;




        numLines --;
    }






    return 0;
}

