#include <iostream>
using namespace std;
  
void merge(int array[], int l, int m, int r)
{
    auto  n1 = m - l + 1;
    auto  n2 = r - m;
    auto *lArray = new int[n1],
         *rArray = new int[n2];
    for (auto i = 0; i < n1; i++)
        lArray[i] = array[l + i];
    for (auto j = 0; j < n2; j++)
        rArray[j] = array[m + 1 + j];
  
    auto i = 0, j = 0;
    auto k = l;
    while (i < n1 && j < n2) {
        if (lArray[i] <= rArray[j]) {
            array[k] = lArray[i];
            i++;
        }
        else {
            array[k] = rArray[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        array[k] = lArray[i];
        i++;
        k++;
    }
    while (j < n2) {
        array[k] = rArray[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int begin, int end)
{
    if (begin >= end)
        return; // Returns recursively
  
    auto m = begin + (end - begin) / 2;
    mergeSort(array, begin, m);
    mergeSort(array, m + 1, end);
    merge(array, begin, m, end);
}
