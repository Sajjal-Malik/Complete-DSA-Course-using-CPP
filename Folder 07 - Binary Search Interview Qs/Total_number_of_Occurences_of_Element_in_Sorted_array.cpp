#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key){
    int start= 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = 0;
    while(start < end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }   
        else if(key > arr[mid]){  // move to right
            start = mid + 1;
        }
        else if(key < arr[mid]){  // move to left
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;

}

int lastOccurence(int arr[], int size, int key){
    int start= 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = 0;
    while(start < end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }   
        else if(key > arr[mid]){  // move to right
            start = mid + 1;
        }
        else if(key < arr[mid]){  // move to left
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;

}

int main(){

    int arr[] = {1,2,3,3,3,3,3,3,3,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    int key = 3;

    int resultOffirstOccurence = firstOccurence(arr, len, key);
    int resultOflastOccurence = lastOccurence(arr, len, key);

    int totalNoOfOccurences = (resultOflastOccurence - resultOffirstOccurence) + 1;

    cout << "Total No. occurences of key is: " << totalNoOfOccurences << endl;


    return 0;
}