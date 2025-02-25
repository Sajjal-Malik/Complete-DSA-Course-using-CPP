#include <bits/stdc++.h>
using namespace std;

// good to use in cases when the size of the array is small with O(n^2) Time Complexity
void selectionSort(int arr[], int len)
{

    for (int i = 0; i < len - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{

    int arr[] = {64, 22, 55, 11, 25};
    int len = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, len);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}