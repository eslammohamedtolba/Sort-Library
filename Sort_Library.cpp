#include "Sort_library.h"
namespace sortlib
{
    // all functions bodies
    template<typename T>
    bool greater(T a,T b){
        return a > b;
    }

    template<typename T>
    void bubbleSort(T arr[],int n, bool(&compare)(T,T) ){
        bool sorted;
        for (int i = 0;i < n;++i){
            sorted = true;
            for (int j = 0;j < n - i - 1;++j){
                if (compare(arr[j],arr[j + 1])){
                    swap(arr[j],arr[j + 1]);
                    sorted = false;
                }
            }
            if (sorted)break;
        }
    }

    template<typename T>
    int part(T arr[],int l,int r){
        T piv = arr[l];
        int i = l,j = r - 1;
        while(i < j){
            while(piv >= arr[i])i++;
            while(piv < arr[j])j--;
            if (i < j)swap(arr[i],arr[j]);
        }
        swap(arr[l],arr[j]);
        return j;
    }

    template<typename T>
    void quickSort(T arr[],int l,int r){
        if (l < r){
            int index = part(arr,l,r);
            quickSort(arr,l,index);
            quickSort(arr,index + 1,r);
        }
    }
}