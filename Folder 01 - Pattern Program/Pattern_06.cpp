#include<iostream>
using namespace std;

// Pattern type using this program 
// 1
// 22
// 333
// 4444

int main(){

    int n = 0;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int rows = 1;

    while(rows <= n){

        int cols = 1;

        while(cols <= rows){
            cout << rows;
            cols++;
        }

        cout << endl;
        rows++;
    }

    return 0;
}