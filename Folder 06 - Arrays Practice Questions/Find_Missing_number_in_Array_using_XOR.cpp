#include<iostream>
using namespace std;

// Function to find the missing number in an array containing numbers from 1 to n
int missingNumberInArray(int arr[], int n){
    
    int xor1 = 0; // This will store the XOR of all numbers from 1 to n
    int xor2 = 0; // This will store the XOR of all elements in the array
    
    // Loop through the array and compute XOR of all elements and XOR of numbers from 1 to n-1
    for(int i = 0; i < n - 1; i++){
        xor2 = xor2 ^ arr[i]; // XOR of array elements
        xor1 = xor1 ^ (i + 1); // XOR of numbers from 1 to n-1
    }
    
    // XOR the final number n into xor1
    xor1 = xor1 ^ n;
    
    // The missing number is the XOR of xor1 and xor2
    return xor1 ^ xor2;
}

int main(){

    // Example array with one missing number
    int arr[] = {1, 2, 4, 5};
    
    // The array has 4 elements, but the numbers go up to 5, so n should be 5
    int n = 5;
    
    // Call the function to find the missing number
    int missingNumber = missingNumberInArray(arr, n);
    
    // Output the missing number
    cout << "Missing number in the above array is: " << missingNumber << endl;

    return 0;
}