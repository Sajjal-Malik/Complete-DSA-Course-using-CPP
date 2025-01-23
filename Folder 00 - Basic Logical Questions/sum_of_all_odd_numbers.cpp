#include<iostream>
using namespace std;

int main(){

    int value;
    cout << "Enter the value upto which you want to generate the sum of numbers: " << endl;
    cin >> value;

    int sum = 0;
    int num = 1;

    while(num <= value){    
        if(num % 2 != 0)
            sum += num;
            
        num++;
    }

    cout << "The sum of all the odd numbers upto "<< value << " is " << sum << endl;

    return 0;
}