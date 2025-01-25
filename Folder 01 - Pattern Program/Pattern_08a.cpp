#include<iostream>
using namespace std;

// Pattern type using this program 
// 1
// 2 3
// 3 4 5
// 4 5 6 7

int main(){

    int n = 0;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    int rows = 1;

    while(rows <= n){

        int cols = 1;
        int value = rows;

        while(cols <= rows){
            cout << value << " ";
            value++;
            cols++;
        }

        cout << endl;
        rows++;
    }

    return 0;
}