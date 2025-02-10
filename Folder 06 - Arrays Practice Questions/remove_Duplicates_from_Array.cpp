#include<iostream>
using namespace std;

int removeDuplicates(int arr[], int len){
    int i = 0;
    for(int j = 1; j < len;j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

int main(){

    int arr[] = {1,1,2,2,2,3,3,4,};
    int len = sizeof(arr)/sizeof(arr[0]);

    int result = removeDuplicates(arr, len);

    cout << "Result from the array is: " << result << endl;

    return 0;
}