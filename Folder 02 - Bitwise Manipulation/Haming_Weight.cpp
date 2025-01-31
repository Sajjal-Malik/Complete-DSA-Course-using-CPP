#include<bits/stdc++.h>
using namespace std;

// Function to calculate the Hamming weight (number of 1 bits) of a 32-bit unsigned integer
int hammingWeight(uint32_t n){

    int count = 0;

    while(n != 0){
        // Check if the least significant bit (LSB) is 1
        if(n & 1){
            count++; // Increment the count if the LSB is 1
        }

        // Right shift the number to process the next bit
        n = n >> 1; // Equivalent to dividing by 2
    }

    return count;
}

// Main function to execute the program
int main(){

    // Initialize a 32-bit unsigned integer with a binary literal
    uint32_t n = 0b10000100010000001000000100000111; // Example binary number

    int countOfBinaryOnes = hammingWeight(n);

    // Output the count of 1s in the binary number
    cout << "The count of 1s in the given binary number is: " << countOfBinaryOnes << endl;

    return 0;
}