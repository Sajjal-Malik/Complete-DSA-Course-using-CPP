#include <iostream>
using namespace std;
void getMin(int arr[], int N)
{
    int max = arr[0];
    for (int i = 1; i < N; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    cout << "Maximum Value = " << max << "\n";

}
int main()
{
    int arr[] = {2, 1, 6, 9, 4, 10, 15, 21};
    int N = 8;
    getMin(arr, N);
    return 0;
}