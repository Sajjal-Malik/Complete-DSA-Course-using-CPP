#include <bits/stdc++.h>
using namespace std;

// good to use in cases when the size of the array is small with O(n^2) Time Complexity
void insertionSort(int arr[], int len)
{

    for (int i = 1; i < len; i++)
    {
        int temp = arr[i];
        
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shift the value
                arr[j + 1] = arr[j];
            }
            else 
            {
                // stop the iteration
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{

    int arr[] = {64, 22, 55, 11, 25};
    int len = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, len);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}