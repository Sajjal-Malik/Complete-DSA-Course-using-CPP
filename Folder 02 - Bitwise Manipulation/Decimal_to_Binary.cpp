#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Function to convert a decimal number to its binary equivalent (as a decimal representation)
void decimalToBinary(int n)
{
    int ans = 0; // Variable to store the resultant binary number in decimal form
    int i = 0;   // Variable to track the position of the current binary digit

    // Loop until all bits of the decimal number have been processed
    while (n != 0)
    {
        // Extract the least significant bit (LSB) of the decimal number
        int bit = n & 1;

        // Update the binary answer by adding the current bit multiplied by the corresponding power of 10
        ans = (bit * pow(10, i)) + ans; // Add the bit to the correct position in the binary number

        // Right shift the decimal number to process the next bit
        n = n >> 1; // Equivalent to dividing by 2
        i++; // Move to the next position for the next binary digit
    }

    // Output the final binary value
    cout << "Answer in Binary is: " << ans << endl;
}

// Main function to execute the program
int main()
{
    int n = 123; // Example decimal number to convert to binary
    decimalToBinary(n); // Call the function to convert the decimal number to binary

    return 0; // Indicate successful execution
}