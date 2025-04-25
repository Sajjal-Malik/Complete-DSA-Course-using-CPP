#include<bits/stdc++.h>
using namespace std;

void sortArray(int *arr, int n){
    
}

int main(){

    int arr[] = {5, 2, 3, 1, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    sortArray(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}