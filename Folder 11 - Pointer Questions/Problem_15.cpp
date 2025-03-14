#include<bits/stdc++.h>
using namespace std;

int main(){

    char arr[] = "abcde";
    char *p = &arr[0];  // in terms of character array whole array will be saved to pointer and will be printed out in next line
    p++;  // pointer will move to one character ahead from the array
    cout << p << endl;

    return 0;
}