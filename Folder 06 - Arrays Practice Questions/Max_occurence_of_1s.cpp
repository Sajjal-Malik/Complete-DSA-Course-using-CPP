#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(int arr[], int len){
    int maxi = 0;
    int count = 0;

    for(int i = 0; i < len; i++){
        if(arr[i] == 1){
            count++;
            maxi = max(maxi, count);
        }
        else{
            count = 0;
        }
    }
    return maxi;
}

int main(){

    int arr[] = {1,1,0,1,1,1,1,0,1,1,1,0,1};
    int len = sizeof(arr)/sizeof(arr[0]);

    int maxOne = findMaxConsecutiveOnes(arr, len);
    cout << "Max occurrences of 1 in the given array are: " << maxOne << endl;

    return 0;
}