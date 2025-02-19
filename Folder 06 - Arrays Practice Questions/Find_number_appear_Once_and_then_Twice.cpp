#include<bits/stdc++.h>
using namespace std;

int getSingleElement(int arr[], int len){
    int xorr = 0;
    for(int i = 0; i < len; i++){
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main(){

    int arr[] = {1,1,2,3,3,3,4,4};
    int len = sizeof(arr)/sizeof(arr[0]);

    int element = getSingleElement(arr, len);

    cout << "Single element: " << element << endl;

    return 0;
}