#include<iostream>
using namespace std;

int* leftRotate(int arr[], int len){
    int temp = arr[0];

    for(int i = 1; i < len; i++){
        arr[i - 1] = arr[i];
    }
    arr[len - 1] = temp;
    return arr;
}

int main(){

    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout << "Original Array is: " << endl;
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int* ptr = leftRotate(arr, len);
    
    cout << "Left Rotated array looks like: " << endl;
    for(int i = 0; i < len; i++){
        cout << ptr[i] << " ";
    }

    return 0;
}