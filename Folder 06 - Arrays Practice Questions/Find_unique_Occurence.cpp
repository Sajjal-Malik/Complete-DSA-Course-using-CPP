#include <iostream>
using namespace std;

bool uniqueOccurrences(int arr[], int size) {
    int freq[2001] = {0}; // Assuming range -1000 to 1000
    int countFreq[1001] = {0}; // Stores frequency of frequencies

    for (int i = 0; i < size; i++) {
        freq[arr[i] + 1000]++; // Shift index to positive
    }

    for (int i = 0; i < 2001; i++) {
        if (freq[i] > 0) {
            if (countFreq[freq[i]] > 0) {
                return false; // Frequency already exists
            }
            countFreq[freq[i]]++;
        }
    }

    return true;
}

int main() {
    int arr[] = {1, 2, 2, 1, 1, 3};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << (uniqueOccurrences(arr, len) ? "True" : "False") << endl;

    return 0;
}
