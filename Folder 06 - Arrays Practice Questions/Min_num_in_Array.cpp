#include <iostream>
using namespace std;
void getMax(int arr[], int N)
{
    int min = arr[0];
    for (int i = 1; i < N; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Minimum Value = " << min;
}
int main()
{
    int arr[] = {2, 1, 6, 9, 4, 10, 15, 21};
    int N = 8;
    getMax(arr, N);
    return 0;
}