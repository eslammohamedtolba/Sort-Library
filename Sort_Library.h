#ifndef SORT_LIBRARY_SORT_LIBRARY_H
#define SORT_LIBRARY_SORT_LIBRARY_H
#include "bits/stdc++.h"
using namespace std;
namespace sortlib
{
    // all functions headers
    template<typename T>
    bool greater(T a,T b);

    template<typename T>
    void bubbleSort(T arr[],int n,bool (&compare)(T,T) = greater);

    template<typename T>
    int part(T arr[],int l,int r);

    template<typename T>
    void quickSort(T arr[],int l,int r);
}
#endif //SORT_LIBRARY_SORT_LIBRARY_H
