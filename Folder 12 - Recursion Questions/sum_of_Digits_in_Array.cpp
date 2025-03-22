#include<bits/stdc++.h>
using namespace std;

int sumOfArray(int *arr, int n)
{
    if (n <= 0)
        return 0;

    if (n == 1)
        return arr[0];

    int remainingPart = sumOfArray(arr + 1, n - 1);
    int sum = arr[0] + remainingPart;
    return sum;
}

int main(){

    int arr[] = {3, 2, 5, 1, 6};

    int size = sizeof(arr)/sizeof(arr[0]);

    int sum = sumOfArray(arr, size);

    cout << "Sum of array is: " << sum << endl;

    return 0;
}