#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size){

    // base case
    if(size == 0 || size == 1)
        return true;
    
    if(arr[0] > arr[1])
        return false;
    else{
        return isSorted(arr + 1, size - 1);
    }
}

int main(){

    int arr[] = {2, 4, 6, 9, 11, 13};

    int size = sizeof(arr)/sizeof(arr[0]);

    if(isSorted(arr, size)){
        cout << "Array is sorted";
    }
    else{
        cout << "Array is not Sorted";
    }

    return 0;
}