#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n){

    int count = 0;

    while(n != 0){
        if(n & 1){
            count++;
        }

        n = n >> 1;
    }

    return count;
}

int main(){

    uint32_t n = 0b10000100010000001000000100000111;
    int countOfBinaryOnes = hammingWeight(n);

    cout << "The count of 1s in the given binary number is: " << countOfBinaryOnes << endl;


    return 0;
}