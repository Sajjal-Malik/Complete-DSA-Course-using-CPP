#include<iostream>
using namespace std;

void leftRotateByPlaces(int arr[], int len, int d){

    d = d % len;  // getting the remainder to make it the length of the new temporary array

    // stoing the values to rotate in the temporary array
    int temp[d];
    for(int i = 0; i < d; i++){
        temp[i] = arr[i];
    }

    // Rotating the array elements upto d spaces and storing them back to the original array
    for(int i = d; i < len; i++){
        arr[i - d] = arr[i];
    }

    // Storing the rotated elements back to original array from temporary array
    for(int i = len - d; i < len; i++){
        arr[i] = temp[i - (len - d)];
    }

}

int main(){

    int arr[] = {7,5,2,11,2,43,1,1};
    int length = sizeof(arr)/sizeof(arr[0]);
    int d = 0;

    cout << "Original Array looks like: " << endl;
    for(int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Enter the D spaces you want to Rotate the array: " << endl;
    cin >> d;
    cout << "Left Rotated array upto D spaces is: " << endl;
    leftRotateByPlaces(arr, length, d);
    for(int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
    return 0;
}