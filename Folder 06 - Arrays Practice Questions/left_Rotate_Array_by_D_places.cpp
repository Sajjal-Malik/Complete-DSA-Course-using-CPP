#include<iostream>
using namespace std;

// Function to perform left rotation of an array by 'd' places
void leftRotateByPlaces(int arr[], int len, int d) {

    // Handle cases where 'd' is greater than the length of the array
    d = d % len;  // Using modulo operation to ensure 'd' is within bounds

    // Create a temporary array to store the first 'd' elements
    int temp[d]; 

    // Store the first 'd' elements of the original array into the temporary array
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements of the array to the left by 'd' places
    for (int i = d; i < len; i++) {
        arr[i - d] = arr[i]; // Move elements from index 'd' to the beginning
    }

    // Place the elements from the temporary array back into the original array
    // at the end, completing the left rotation
    for (int i = len - d; i < len; i++) {
        arr[i] = temp[i - (len - d)]; // Copy elements from temp to the end of the array
    }
}

int main() {
    // Initialize the array
    int arr[] = {7, 5, 2, 11, 2, 43, 1, 1};
    int length = sizeof(arr) / sizeof(arr[0]); // Calculate the length of the array
    int d = 0; // Variable to store the number of places to rotate

    // Display the original array
    cout << "Original Array looks like: " << endl;
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Prompt the user to enter the number of places to rotate
    cout << "Enter the D spaces you want to Rotate the array: " << endl;
    cin >> d;

    // Perform the left rotation
    leftRotateByPlaces(arr, length, d);

    // Display the array after left rotation
    cout << "Left Rotated array upto D spaces is: " << endl;
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}