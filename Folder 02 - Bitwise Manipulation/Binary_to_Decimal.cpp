#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void binaryToDecimal(int n)
{
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        
        if(digit == 1){
            ans = ans + pow(2, i);
        }

        n = n / 10;
        i++;
    }

    cout << "Answer in Decimal is: " << ans << endl;
}

int main()
{

    int n = 10101;
    binaryToDecimal(n);

    return 0;
}