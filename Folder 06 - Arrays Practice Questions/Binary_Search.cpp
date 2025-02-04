#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int size)
{   
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2;  // to avoid integer range overflow

    while(start < end){
        if(arr[mid] == key)
            return mid;
        
        if(arr[mid] < key)
            start = mid + 1;
        
        if(arr[mid] > key)
            end = mid - 1;
        
        // mid = (start + end) / 2;
        mid = start + (end - start) / 2;  // better for optimization
    }   

    return -1;

}

int main()
{
    int arr[] = {2, 3, 4, 10, 40, 75, 100};
    int x = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = binarySearch(arr, x, n);
    if (res == -1)
        cout << "Not Present";
    else
        cout << "Present at Index " << res;
    return 0;
}