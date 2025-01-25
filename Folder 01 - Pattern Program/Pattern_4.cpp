#include<iostream>
using namespace std;

// Pattern type using this program 
// 1 2 3
// 4 5 6
// 7 8 9

int main(){

    int n = 0;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    int count = 1;
    int rows = 1;

    while(rows <= n){

        int cols = 1;

        while(cols <= n){
            cout << count << " ";
            count++;
            cols++;
        }

        cout << endl;
        rows++;
    }

    return 0;
}