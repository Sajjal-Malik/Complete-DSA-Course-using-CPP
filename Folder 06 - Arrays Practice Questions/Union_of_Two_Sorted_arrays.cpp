#include<iostream>
using namespace std;

void printUnionOfTwoSortedArrays(int arr1[], int len1, int arr2[], int len2) {
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

        // Print the smaller element
        if (arr1[i] < arr2[j]) {
            cout << arr1[i++] << " ";
        } else if (arr1[i] > arr2[j]) {
            cout << arr2[j++] << " ";
        } else {
            // If both elements are equal, print one and move both pointers
            cout << arr1[i++] << " ";
            j++;
        }
    }

    // Print remaining elements of arr1 (if any)
    while (i < len1) {
        if (i > 0 && arr1[i] == arr1[i - 1]) {
            i++;
            continue;
        }
        cout << arr1[i++] << " ";
    }

    // Print remaining elements of arr2 (if any)
    while (j < len2) {
        if (j > 0 && arr2[j] == arr2[j - 1]) {
            j++;
            continue;
        }
        cout << arr2[j++] << " ";
    }
}

int main() {
    int arr1[] = {1, 2, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 4, 5, 6};

    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Union of the two sorted arrays is: ";
    printUnionOfTwoSortedArrays(arr1, len1, arr2, len2);

    return 0;
}