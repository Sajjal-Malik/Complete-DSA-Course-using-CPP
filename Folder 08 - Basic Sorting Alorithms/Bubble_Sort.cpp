#include <bits/stdc++.h>
using namespace std;

// good to use in cases when the size of the array is small with O(n^2) Time Complexity
void bubbleSort(int arr[], int len)
{

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i; j++)
        {
            if (arr[j] > arr[j + 1])
            
                swap(arr[j], arr[j + 1]);
        }
    }
}

int main()
{

    int arr[] = {64, 22, 55, 11, 25};
    int len = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, len);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}