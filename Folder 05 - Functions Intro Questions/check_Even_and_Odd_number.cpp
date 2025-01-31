#include<iostream>
using namespace std;

bool isEven(int num){
    if(num & 1){

        cout << num << endl;

        return 0;  // 1 means false;
    }

    cout << num << endl;
    
    return 1;  // 0 means true;
}

int main(){

    int num = 0;
    cin >> num;

    if(isEven(num)){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }
    

    return 0;
}