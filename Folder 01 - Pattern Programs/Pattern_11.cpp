#include<iostream>
using namespace std;

// Pattern type using this program 
// ABCD
// ABCD
// ABCD
// ABCD

int main(){

    int n = 0;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    int rows = 1;

    while(rows <= n){

        int cols = 1;

        while(cols <= n){
            char ch = 'A' + cols - 1;
            cout << ch;
            cols++;
        }

        cout << endl;
        rows++;
    }

    return 0;
}