#include <bits/stdc++.h>
using namespace std;


void decimalToBinary(int n)
{
    int ans = 0;
    int i = 0;

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

    cout << "Answer in Binary is: " << ans << endl;
}


int main()
{
    int n = 123;
    decimalToBinary(n);

    return 0;
}