#include<bits/stdc++.h>
using namespace std;

int findMissingNumber(vector<int> &arr) {
    int n = arr.size() + 1;  // The size of the full array (n-1 elements given)
    
    // Calculate the expected sum of first n natural numbers
    int exp_sum = n * (n + 1) / 2;

    // Calculate the sum of the array elements
    int actual_sum = 0;
    for(int i = 0; i < arr.size(); i++) {
        actual_sum += arr[i];
    }

    // The missing number will be the difference between expected sum and actual sum
    return exp_sum - actual_sum;
}

int main() {
    int range;
    cin >> range; // The full range of numbers, i.e., n

    vector<int> values(range - 1); // Create a vector of size n-1
    for(int i = 0; i < range - 1; i++) {
        cin >> values[i]; // Read the elements into the vector
    }

    // Find the missing number
    int result = findMissingNumber(values);

    cout << result;

    return 0;
}
