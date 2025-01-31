#include<iostream>
using namespace std;

void printCounting(int n){

    for(int i = 0; i <= n; i++){
        cout << i << " ";
    }
}

int main(){

    int num = 0;
    cin >> num;
    printCounting(num);

    return 0;
}