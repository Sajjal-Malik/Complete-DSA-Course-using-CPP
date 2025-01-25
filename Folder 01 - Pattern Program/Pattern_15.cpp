#include<iostream>
using namespace std;

// Pattern type using this program 
// A
// B C
// D E F
// G H I J

int main(){

    int n = 0;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    int rows = 1;
    char value = 'A';

    while(rows <= n){

        int cols = 1;

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