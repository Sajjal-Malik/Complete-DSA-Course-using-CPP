#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e){

    int pivot = arr[s];

    int cnt = 0;
    for(int i = s + 1; i <= e; i++){
        if(arr[i] <= pivot){
            cnt++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // handle left and right parts
    int i = s, j = e;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}   

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