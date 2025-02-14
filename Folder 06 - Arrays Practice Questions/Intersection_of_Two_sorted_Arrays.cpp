#include<iostream>
using namespace std;

void printIntersectionOfTwoSortedArrays(int arr1[], int len1, int arr2[], int len2) {
    int i = 0, j = 0;

    // Traverse both arrays using two pointers
    while (i < len1 && j < len2) {
        // Skip duplicates in arr1
        if (i > 0 && arr1[i] == arr1[i - 1]) {
            i++;
            continue;
        }
        // Skip duplicates in arr2
        if (j > 0 && arr2[j] == arr2[j - 1]) {
            j++;
            continue;
        }

        // If elements are equal, print the element (intersection)
        if (arr1[i] == arr2[j]) {
            cout << arr1[i] << " ";
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {
            // Move the pointer of the smaller element
            i++;
        } else {
            j++;
        }
    }
}

int main() {
    int arr1[] = {1, 2, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 4, 5, 6};

    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Intersection of the two sorted arrays is: ";
    printIntersectionOfTwoSortedArrays(arr1, len1, arr2, len2);

    return 0;
}