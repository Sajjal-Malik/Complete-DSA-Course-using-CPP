#include<iostream>
using namespace std;

// Pattern type using this program 
// 111
// 222
// 333

int main(){

    int n = 0;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int rows = 1;

    while(rows <= n){
        
        int cols = 1;
        while(cols <= n){
            cout << rows; 
            cols++;
        }
        cout << endl;
        rows++;
    }


    return 0;
}