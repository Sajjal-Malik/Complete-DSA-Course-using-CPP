#include<bits/stdc++.h>
using namespace std;

bool checkPallindrome(string str, int start, int end){

    // base case
    if(start > end){
        return true;
    }
    if(str[start] != str[end]){
        return false;
    }
    else{
        // Recursive call
        return checkPallindrome(str, start++, end--);
    }

}

int main(){

    string name = "abbccbba";
    int start = 0;
    int end = name.length() - 1;

    bool isPallindrome = checkPallindrome(name, start, end);

    if(isPallindrome)
        cout << "String is Pallindrome" << endl;
    else
        cout << "String is not Pallindrome" << endl;

    return 0;
}