#include<bits/stdc++.h>
using namespace std;

int reverseInteger(int n) {
    int answer = 0;

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
    return answer;
}

int main() {
    int num = 123; 

    int result = reverseInteger(num);

    cout << "The reverse of this number is -> " << result << endl;

    return 0; // Indicate that the program finished successfully
}