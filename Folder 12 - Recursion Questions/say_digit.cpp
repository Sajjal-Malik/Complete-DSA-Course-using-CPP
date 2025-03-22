#include<bits/stdc++.h>
using namespace std;

void sayDigit(int n, string arr[]){

    // base case
    if(n == 0)
        return;

    // processing
    int remainder = n % 10;
    n = n / 10;
    
    // recursive call
    sayDigit(n , arr);
    
    cout << arr[n] << " ";
}

int main(){

    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n = 0;
    cin >> n;

    cout << endl;

    sayDigit(n, arr);

    cout << endl;

    return 0;
}