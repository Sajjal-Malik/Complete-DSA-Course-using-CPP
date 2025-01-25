#include<iostream>
using namespace std;

// Pattern type using this program 
// ABCD
// EFGH
// IJKL
// MNOP

int main(){

    int n = 0;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    int rows = 1;
    char start = 'A';

    while(rows <= n){

        int cols = 1;

        while(cols <= n){
            cout << start;
            start++;
            cols++;
        }

        cout << endl;
        rows++;
    }

    return 0;
}