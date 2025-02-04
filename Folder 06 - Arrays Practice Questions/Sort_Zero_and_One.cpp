#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortZeroAndOne(int arr[], int size){
    int left = 0, right = size - 1;
    while(left < right){
        if(arr[left] == 0)
            left++;

        if(arr[right] == 1)
            right--;

        swap(arr[left], arr[right]);   
        left++;
        right--;
    }


}

int main(){

    int arr[] = {1,1,0,1,0,0,1,0,0,0};
    int len = sizeof(arr)/sizeof(arr[0]);

    sortZeroAndOne(arr, len);
    printArray(arr, len);

    return 0;
}