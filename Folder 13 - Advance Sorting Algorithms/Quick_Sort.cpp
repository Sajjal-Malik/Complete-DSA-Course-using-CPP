#include<bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int s, int e){

    // base case
    if(s >= e)
        return;

    // next step partition of array
    int p = partition(arr, s, e);

    // sort the left part
    quickSort(arr, s, p - 1);

    // sort the right part
    quickSort(arr, p + 1, e);
}   

int main(){

    int arr[] = {5,3,6,8,2,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, size - 1);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}