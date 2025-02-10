#include<bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[], int size){

    int smallest = arr[0];
    int secondSmallest = INT32_MAX; // assuming the array only contains positive numbers

    for(int i = 1; i < size; i++){
        if(arr[i] < smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < secondSmallest){
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;
}

int secondLargest(int arr[], int size){

    int largest = arr[0];
    int secondLargest = INT32_MIN; // assuming the array only contains positive numbers

    for(int i = 1; i < size; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > secondLargest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

pair<int, int> getSecondOrderElements(int arr[], int size){

    int secondSmallestElement = secondSmallest(arr, size);
    int secondLargestElement = secondLargest(arr, size);

    // return make_pair(secondSmallestElement, secondLargestElement);
    
    return {secondSmallestElement, secondLargestElement};
}

int main(){

    int arr[] = {3,5,1,2,7,9,10,13,20};
    int length = sizeof(arr)/sizeof(arr[0]);

    pair<int, int> result = getSecondOrderElements(arr, length);

    cout << result.first << " " << result.second << endl;

    return 0;
}