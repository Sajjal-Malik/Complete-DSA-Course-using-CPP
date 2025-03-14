#include<iostream>
using namespace std;

// Pattern type using this program 
// AAAA
// BBBB
// CCCC
// DDDD

int main(){

    int n = 0;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    int rows = 1;

    while(rows <= n){

        int cols = 1;

        while(cols <= n){
            char ch = 'A' + rows - 1;
            cout << ch;
            cols++;
        }

        cout << endl;
        rows++;
    }

    return 0;
}