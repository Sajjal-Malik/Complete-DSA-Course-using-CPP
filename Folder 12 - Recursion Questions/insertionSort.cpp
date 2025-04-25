#include <bits/stdc++.h>
using namespace std;

// Helper function to insert element in sorted subarray
void insert(int arr[], int n) {
    int temp = arr[n];
    int j = n - 1;
    while (j >= 0 && arr[j] > temp) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = temp;
}

// Recursive insertion sort
void recursiveInsertionSort(int arr[], int n) {
    // Base case
    if (n <= 1)
        return;

    // Sort first n-1 elements
    recursiveInsertionSort(arr, n - 1);

    // Insert nth element in sorted array of size n-1
    insert(arr, n - 1);
}

int main() {
    int arr[] = {64, 22, 55, 11, 25};
    int len = sizeof(arr) / sizeof(arr[0]);

    recursiveInsertionSort(arr, len);

    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
