#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void fibonacciSequence(int n, int firstNum, int secondNum){
    cout << firstNum << " , " << secondNum;
    for(int i = 0; i < n; i++){
        int nextNumber = firstNum + secondNum;
        cout << " , " << nextNumber ;

        firstNum = secondNum;
        secondNum = nextNumber;
    }
}

int main(){

    int n = 10;
    cout << "Fibonacci Sequence of upto first " << n << " is: ";
    fibonacciSequence(n, 0, 1);

}