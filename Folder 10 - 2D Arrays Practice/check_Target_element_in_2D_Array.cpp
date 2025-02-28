#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[3][4], int target, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] == target)
                return true;
        }
    }
    return false;
}   


int main(){

    int arr[3][4];
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            cin >> arr[row][col];
        }
    }

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    int target = 0;
    cout << "Enter the element you want to search in 2D Array? " << endl;
    cin >> target;

    if(isPresent(arr, target, 3, 4)){
        cout << "Target value is present in 2D Array" << endl;
    }
    else{
        cout << "Target value is not present in 2D Array" << endl;
    }






    return 0;
}