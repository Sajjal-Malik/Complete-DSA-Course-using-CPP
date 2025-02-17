#include<iostream>
using namespace std;

// Function to find the missing number in an array containing numbers from 1 to n
int missingNumberInArray(int arr[], int n){
    // Calculate the sum of the first n natural numbers
    int sum = n * (n + 1) / 2;
    
    // Calculate the sum of the elements in the array
    int s = 0;
    for(int i = 0; i < n - 1; i++){  // Note: The array has n-1 elements
        s += arr[i];
    }
    
    // The missing number is the difference between the sum of the first n natural numbers and the sum of the array elements
    return sum - s;
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