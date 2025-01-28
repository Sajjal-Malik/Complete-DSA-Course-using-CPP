#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Function to convert a binary number (represented in decimal form) to its decimal equivalent
void binaryToDecimal(int n)
{
    int ans = 0; // Variable to store the resultant decimal value
    int i = 0;   // Variable to track the position of the current binary digit (0 or 1)

    // Loop until all digits in the binary number have been processed
    while (n != 0)
    {
        // Extract the last digit of the binary number
        int digit = n % 10;

        // If the digit is 1, update the answer by adding the corresponding power of 2
        if(digit == 1){
            ans = ans + pow(2, i); // Add 2 raised to the current position (i) to ans
        }

        // Remove the last digit from the binary number
        n = n / 10;
        i++; // Move to the next position for the next digit
    }

    // Output the final decimal value
    cout << "Answer in Decimal is: " << ans << endl;
}

// Main function to execute the program
int main()
{
    int n = 10101; // Example binary number in decimal form
    binaryToDecimal(n); // Call the function to convert the binary number to decimal

    return 0; // Indicate successful execution
}