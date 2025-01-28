#include<bits/stdc++.h>
using namespace std;

// Function to reverse the digits of an integer
int reverseInteger(int n) {
    int answer = 0; // Initialize the variable to store the reversed integer

    // Loop until all digits have been processed
    while (n != 0) {
        int lastDigit = n % 10; // Get the last digit of the current number

        // Check for overflow/underflow conditions before updating 'answer'
        if ((answer > INT_MAX / 10) || (answer < INT_MIN / 10)) 
            return 0; // Return 0 if reversing the integer would cause overflow
        
        // Update 'answer' by shifting its digits left and adding the last digit
        answer = (answer * 10) + lastDigit; 
        n /= 10; // Remove the last digit from 'n'
    }
    return answer; // Return the reversed integer
}

int main() {
    int num = 123; // Initialize a number to be reversed

    int result = reverseInteger(num); // Call the reverseInteger function

    // Output the reversed number to the console
    cout << "The reverse of this number is -> " << result << endl;

    return 0; // Indicate that the program finished successfully
}