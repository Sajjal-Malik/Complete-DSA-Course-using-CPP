#include<bits/stdc++.h>
using namespace std;

void reverseArray(int *arr, int n){
    int left = 0;
    int right = n - 1;

    while(left <= right){

        // manually swapping using third variable
        // int temp;
        // temp = arr[left];
        // arr[left] = arr[right];
        // arr[right] = temp;
        
        // built-in swap function in cpp
        swap(arr[left], arr[right]);

        left++;
        right--;
    }
}

int main(){

    int arr[] = {4, 2, 3, 7, 8};
    int size = sizeof(arr)/sizeof(arr[0]);

    reverseArray(arr, size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}