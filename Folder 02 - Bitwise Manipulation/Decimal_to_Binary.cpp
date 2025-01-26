#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void decimalToBinary(int n)
{
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;

        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
        i++;
    }

    cout << "Answer in Binary is: " << ans << endl;
}

int main()
{

    int n = 123;
    decimalToBinary(n);

    return 0;
}