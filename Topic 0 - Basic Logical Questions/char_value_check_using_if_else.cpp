#include<iostream>
using namespace std;

int main(){

    char val = 10;

    if(val >= 'a' && val <= 'z'){
        cout << "It is lowercase character" << endl;
    }
    else if(val >= 'A' && val <= 'Z'){
        cout << "It is uppercase character" << endl;
    }
    else if(val >= 0 && val <= 9){
        cout << "It is a number not a character" << endl;
    }
    else{
        cout << "It is neither number nor lowercase and uppercase character" << endl;
    }

    return 0;
}