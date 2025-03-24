#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int *arr, int start, int end, int key){
    if(start > end){
        return false;
    }

    int mid = start + (end - start) / 2;

    if(arr[mid] == key){
        return true;
    }
    
    if(arr[mid] < key){
        return binarySearch(arr, mid + 1, end, key);
    }
    else{
        return binarySearch(arr, start, mid - 1, key);
    }
}

int main(){

    int arr[] = {1, 3, 4, 5, 6, 8, 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 6;

    bool search = binarySearch(arr, 0, size - 1, target);

    if(search){
        cout << "Key is found" << endl;
    }
    else{
        cout << "Key is not found" << endl;
    }

    return 0;
}