#include "Sort_library.h"
#include "Sort_Library.cpp"
using namespace sortlib;

int main() {
    int arr[] = {70,60,50,40,30,20};

    sortlib::quickSort(arr,0,6);
    for (int i = 0;i < 6;++i){
        cout << arr[i] << ' ';
    }
}
