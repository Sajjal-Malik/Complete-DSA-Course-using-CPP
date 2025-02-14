#include<iostream>
using namespace std;

int* moveZerosToEnd(int arr[], int len){
    int j = -1;
    for(int i = 0; i < len; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    
    if(j == -1) return arr;
    
    for(int i = j + 1; i < len; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;
}

int main(){

    int arr[]  = {1,0,2,3,0,2,0,0,4,5,1};
    int len = sizeof(arr)/sizeof(arr[0]);  

    cout<< "Original Array -> " << endl;
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int* ptr = moveZerosToEnd(arr, len);

    cout << "Output Array is -> " << endl;
    for(int i = 0; i < len; i++){
        cout << ptr[i] << " ";
    }

    return 0;
}