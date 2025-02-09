#include<iostream>
using namespace std;

long long int sqrtInteger(int n){
    int start = 0;
    int end = n;
    long long mid = start + (end - start) / 2;
    long long int ans = -1;
    while(start <= end){
        long long int square = mid * mid;
        
        if(square == n)
            return mid;
        
        if(square < n){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSolution){
    double factor = 1;
    double ans = tempSolution;

    for(int i = 0; i < precision; i++){
        factor = factor / 10;
        for(double j = ans; j*j < n; j += factor){
            ans = j;
        }
    }
    return ans;
}

int main(){

    int num;
    cout << "Enter the number: ";
    cin >> num;

    int sqrtIntegerAns = sqrtInteger(num);
    // cout << "Square root of " << num << " is: " << sqrtAns << endl;

    double sqrtDoubleAns = morePrecision(num, 3, sqrtIntegerAns);
    cout << "Precised Square root of " << num << " is: " << sqrtDoubleAns << endl;
    
    return 0;
}