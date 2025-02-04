#include<iostream>
using namespace std;

void swapAlternatives(int arr[], int size){
    for(int i = 0; i < size; i+=2){
        if(i < i + 1){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){

    int arr[] = {3,4,5,7,1,2,9,11};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout << "Original Array: " << endl;
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    swapAlternatives(arr, len);

    cout << "Swapped Array: " << endl;
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }

    return 0;
}