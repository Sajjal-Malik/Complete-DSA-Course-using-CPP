#include<iostream>
using namespace std;

int uniqueElementsInArray(int arr[], int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }   
    return ans;
}

int main(){

    int arr[] = {3,4,5,7,3,2,4,5,2};
    int len = sizeof(arr)/sizeof(arr[0]);

    int result = uniqueElementsInArray(arr,len);
    cout << "Unique elements in array is: " << result << endl;

    return 0;
}