#include<iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while(start < end){
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main(){

    
    int arr[] = {3,4,5,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    int peakElement = peakIndexInMountainArray(arr,len);

    cout << "Peak index in given Mountain Array is: " << peakElement << endl;

    return 0;
}