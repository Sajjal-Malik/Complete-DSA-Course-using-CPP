#include <iostream>
using namespace std;

int findDuplicates(int arr[], int size) {
    int ans = 0;

    for(int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }

    for(int i = 1; i < size; i++) {
        ans = ans ^ i;
    }
    return ans;

}

int main() {
    int arr[] = {5, 1, 2, 3, 4, 2};
    int len = sizeof(arr) / sizeof(arr[0]);

    int ans = findDuplicates(arr, len);

    cout << "Duplicate value in the array is: " << ans << endl;

    return 0;
}
