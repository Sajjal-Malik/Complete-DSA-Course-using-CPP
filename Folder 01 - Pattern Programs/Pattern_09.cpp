#include<iostream>
using namespace std;

// Pattern type using this program 
// 1
// 2 1
// 3 2 1
// 4 3 2 1

int main(){

    int n = 0;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    int rows = 1;

    while(rows <= n){

        int cols = 1;

        while(cols <= rows){
            cout << rows - cols + 1 << " ";
            cols++;
        }

        cout << endl;
        rows++;
    }

    return 0;
}