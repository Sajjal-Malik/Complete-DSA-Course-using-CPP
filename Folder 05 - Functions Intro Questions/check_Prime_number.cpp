#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        
        // number successfully divided
        if(n % i == 0){

            return 0;  // means false
        }
    }
    return 1;  // means true
}

int main(){

    int n = 0;
    cin >> n;

    if(isPrime(n)){
        cout << "Number is prime" << endl;
    }
    else{
        cout << "Number is not prime" << endl;
    }
    

    return 0;
}