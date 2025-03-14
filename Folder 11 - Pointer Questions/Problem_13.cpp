#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {11, 21, 31, 41};
    int *ptr = arr++;  // trying to update the value in symbol table which is not possible
    cout << *ptr << endl;
    return 0;
}