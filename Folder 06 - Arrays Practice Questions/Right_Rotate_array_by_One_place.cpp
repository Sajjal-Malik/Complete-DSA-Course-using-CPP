#include<iostream>
using namespace std;

int* rightRotate(int arr[], int len){
    int temp = arr[len - 1];

    for(int i = len - 2; i >= 0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = temp;
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
    
    int* ptr = rightRotate(arr, len);
    
    cout << "Right Rotated array looks like: " << endl;
    for(int i = 0; i < len; i++){
        cout << ptr[i] << " ";
    }

    return 0;
}