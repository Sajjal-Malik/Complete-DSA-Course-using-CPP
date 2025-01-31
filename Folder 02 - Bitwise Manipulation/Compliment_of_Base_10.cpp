#include<bits/stdc++.h>
using namespace std;

int bitwiseCompliment(int n){
    int m = n;
    int mask = 0;

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

    return ans;
}

int main(){
    int value = 5;
    int result = bitwiseCompliment(value); // Calculate the bitwise complement of the input value

    cout << "The answer is: " << result << "\n";

    return 0;
}