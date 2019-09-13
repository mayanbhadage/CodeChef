#include <iostream>
#include <algorithm>
////Swap
//int partition(int* ref, int start, int end);
//
//void swap(int &a, int &b)
//{
//    int temp;
//
//    temp = a;
//    a = b;
//    b = temp;
//}
//
//
//// Quick Sort
//
//
//void quickSort(int *ref_vect, int start, int end)
//{
//    if(start>=end)
//    {
//        return;
//    }
//
//    int pIndex = partition(ref_vect, start, end);
//
//
//    quickSort(ref_vect,start,pIndex-1);
//    quickSort(ref_vect,pIndex+1,end);
//}
//
//
//// Partition
//
//int partition(int* ref, int start, int end)
//{
//    srand(time(nullptr));
//    int pivot = start + rand() % (end - start);
//
//    int pIndex = start;
//
//    for(int i = start; i <= (end-1); i++ )
//    {
//        if(ref[i] >= pivot)
//        {
//            swap(ref[i],ref[pIndex]);
//            pIndex ++;
//        }
//    }
//
//    swap(ref[pIndex],ref[end]);
//
//    return pIndex;
//
//}


int main() {
    int numLines = 0;
    std::cin>>numLines;



    int vect[numLines];

int count = 0;
    while(numLines)
    {
        int num;
        std::cin>>num;
        vect[count] = num;

        count++;
        numLines--;
    }

    int start = 0;
    //int end = count;

   sort(vect,vect+count);

    for(auto & x: vect)
        std::cout<<x<<std::endl;

    return 0;
}