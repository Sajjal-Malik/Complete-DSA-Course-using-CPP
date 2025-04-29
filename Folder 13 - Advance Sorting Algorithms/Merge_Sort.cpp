#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e){
    
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    mainArrayIndex = mid + 1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    
    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index1 < len1){
        arr[mainArrayIndex++] = second[index2++];
    }

}

void mergeSort(int *arr, int s, int e){
    
    // base case
    if(s >= e)
        return;

    int mid = s + (e - s) / 2;

    // sorting the left part
    mergeSort(arr, s, mid);

    // sorting the right part
    mergeSort(arr, mid + 1, e);

    // merge two arrays
    merge(arr, s, e);
}

int main(){

    int arr[] = {5,3,6,8,2,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, size - 1);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}