#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int size, int key){

    if(size == 0)
        return false;
    if(arr[0] == key){
        return true;
    }
    else{
        return linearSearch(arr + 1, size - 1, key);
    }

}

int main(){

    int arr[] = {4, 5, 3, 1, 9, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 6;

    bool search = linearSearch(arr, size, target);

    if(search){
        cout << "Key is found" << endl;
    }
    else{
        cout << "Key is not found" << endl;
    }

    return 0;
}