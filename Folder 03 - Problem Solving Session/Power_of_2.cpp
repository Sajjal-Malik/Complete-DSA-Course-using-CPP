#include<bits/stdc++.h>
using namespace std;

bool powerOfTwo(int n){
    int ans = 1; // Initialize ans to 2^0 (1)

    // Loop to calculate powers of two up to 2^30
    for(int i = 0; i <= 30; i++){

        if(ans == n)
            return true;
        
        // Prevent overflow by checking if doubling ans will exceed INT_MAX
        if(ans < INT_MAX/2)
            ans = ans * 2; // Double ans to get the next power of two
    }
    return false;
}

int main(){
    int value = 16;

    if(powerOfTwo(value))
        cout << "This number is in the Power of Two" << endl;
    else        
        cout << "This number is not in the Power of Two" << endl;

    return 0; // Return success
}