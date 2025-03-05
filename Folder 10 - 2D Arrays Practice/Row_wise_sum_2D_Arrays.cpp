#include<bits/stdc++.h>
using namespace std;

void printRowSum(int arr[3][4], int row, int col){
    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}   


int main(){

    int arr[3][4];
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cin >> arr[row][col];
        }
    }

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    
    printRowSum(arr, 3, 4);



    return 0;
}