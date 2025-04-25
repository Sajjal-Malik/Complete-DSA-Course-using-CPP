#include <bits/stdc++.h>
using namespace std;

// Function to perform selection sort recursively
void selectionSortRecursive(int arr[], int start, int len) {
    // Base case: If the starting index reaches the end of the array, the array is sorted
    if (start == len - 1)
        return;

    // Find the index of the minimum element in the unsorted portion of the array
    int minIndex = start;
    for (int i = start + 1; i < len; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Swap the found minimum element with the element at the current position (start)
    swap(arr[minIndex], arr[start]);

    // Recursively sort the remaining array (after the current start index)
    selectionSortRecursive(arr, start + 1, len);
}

int main() {
    int arr[] = {64, 22, 55, 11, 25};
    int len = sizeof(arr) / sizeof(arr[0]);

    // Call the recursive selection sort function
    selectionSortRecursive(arr, 0, len);

    // Print the sorted array
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
