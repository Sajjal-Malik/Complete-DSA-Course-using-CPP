#include<bits/stdc++.h>
using namespace std;

// Function to check if a given integer n is a power of two.
// The function multiplies a variable ans by 2 iteratively and checks if it matches n.
// The loop runs until ans exceeds the maximum integer value (INT_MAX).
// 
// Parameters:
//   int n: The integer to be checked.
// 
// Returns:
//   bool: Returns true if n is a power of two, false otherwise.
bool powerOfTwo(int n){
    int ans = 1; // Initialize ans to 2^0 (1)

    // Loop to calculate powers of two up to 2^30
    for(int i = 0; i <= 30; i++){

        // If the current power of two equals n, return true
        if(ans == n)
            return true;
        
        // Prevent overflow by checking if doubling ans will exceed INT_MAX
        if(ans < INT_MAX/2)
            ans = ans * 2; // Double ans to get the next power of two
    }
    // If no power of two matches n, return false
    return false;
}

int main(){
    int value = 16; // Example input value to check if it is a power of two

    // Call the powerOfTwo function with value and check the return result
    if(powerOfTwo(value)) // Corrected to pass 'value' to the function
        cout << "This number is in the Power of Two" << endl; // Output if true
    else        
        cout << "This number is not in the Power of Two" << endl; // Output if false

    return 0; // Return success
}