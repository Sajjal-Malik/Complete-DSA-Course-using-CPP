#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int subtractProductandSum(int n){
    
    int prod = 1;
    int sum = 0;

    while(n != 0){
        int digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;

        n = n / 10;
    }

    int answer = prod - sum;
    return answer;
}

int main(){

    int n = 234;
    int result = subtractProductandSum(n);

    cout << "The result of the above function is: " << result << endl;

}