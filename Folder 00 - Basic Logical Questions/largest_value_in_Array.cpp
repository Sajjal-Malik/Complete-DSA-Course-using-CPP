#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {4, 2, 3, 7, 8};
    int size = sizeof(arr)/sizeof(arr[0]);

    int max = INT_MIN;
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << max << endl;

    

    return 0;
}