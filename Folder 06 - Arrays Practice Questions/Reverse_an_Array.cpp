// C++ Program to reverse an array using Two Pointers

#include <iostream>
#include <vector>
using namespace std;

// function to reverse an array
void reverseArray(int arr[], int size) {
  
    // Initialize left to the beginning and right to the end
    int left = 0; 
    int right = size - 1;
  
    // Iterate till left is less than right
    while(left < right) {
      
        // Swap the elements at left and right position
        swap(arr[left], arr[right]);
      
        // Increment the left pointer
        left++;
      
        // Decrement the right pointer
        right--;
    }
}

int main() {

    int arr[] = { 1, 4, 3, 2, 6, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, n);
  
    for(int i = 0; i < n; i++) 
        cout << arr[i] << " ";

    return 0;
}