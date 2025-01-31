#include<bits/stdc++.h>
using namespace std;

int powerOfNum(int num1, int num2){

    int answer = 1;
    for(int i = 1; i < num2; i++){
        answer = answer * num1;
    }

    return answer;
}

int main(){

    int num1, num2;
    cout << "Enter the value of num1: "<< endl;
    cin >> num1;
    cout << "Enter the value of num2: "<< endl;
    cin >> num2;

    int result = powerOfNum(num1, num2);
    cout << "The result is: " << result  << endl;

    return 0;
}