#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortZeroOneTwo(int arr[], int size) {
    int low = 0, mid = 0, high = size - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } 
        else if (arr[mid] == 1) {
            mid++;
        } 
        else {  // arr[mid] == 2
            swap(arr[mid], arr[high]);
            high--; 
            // Note: We do not increment mid here, because the swapped element might need to be checked.
        }
    }
}

int main() {
    int arr[] = {1, 2, 0, 1, 2, 0, 0, 1, 2, 1, 0};
    int len = sizeof(arr) / sizeof(arr[0]);

    sortZeroOneTwo(arr, len);
    printArray(arr, len);

    return 0;
}
