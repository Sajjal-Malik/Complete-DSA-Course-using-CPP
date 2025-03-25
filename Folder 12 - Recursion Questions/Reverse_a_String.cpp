#include<bits/stdc++.h>
using namespace std;

void reverseString(string &str, int start, int end){

    // base case
    if(start > end){
        return;
    }

    swap(str[start], str[end]);
    start++;
    end--;

    // Recursive call
    reverseString(str, start, end);
}

int main(){

    string name = "malik";
    int start = 0;
    int end = name.length() - 1;

    reverseString(name, start, end);

    cout << name << endl;

    return 0;
}