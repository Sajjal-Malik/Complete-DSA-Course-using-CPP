#include<bits/stdc++.h>
using namespace std;

// Function to compute the bitwise complement of a given integer n.
// The bitwise complement flips all the bits of the integer.
// For example, the bitwise complement of 5 (binary: 0000 0101) is 2 (binary: 0000 0010).
// If the input n is 0, the function returns 1 as a special case.
// 
// Parameters:
//   int n: The integer whose bitwise complement is to be calculated.
// 
// Returns:
//   int: The bitwise complement of the input integer n.
int bitwiseCompliment(int n){
    int m = n; // Store a copy of n for manipulation
    int mask = 0; // Initialize a mask to create a bitmask of the same length as n

    // Edge case: if n is 0, return 1 as the complement
    if(n == 0)
        return 1;

    // Create a mask with all bits set to 1, corresponding to the length of n
    while(m != 0){
        mask = (mask << 1) | 1; // Shift mask left and set the least significant bit to 1
        m = m >> 1; // Shift m right to reduce its value
    }
    
    // Compute the bitwise complement of n and apply the mask to retain only relevant bits
    int ans = (~n) & mask;

    return ans; // Return the calculated bitwise complement
}

int main(){
    int value = 5; // Example input value
    int result = bitwiseCompliment(value); // Calculate the bitwise complement of the input value

    cout << "The answer is: " << result << "\n"; // Output the result

    return 0; // Return success
}