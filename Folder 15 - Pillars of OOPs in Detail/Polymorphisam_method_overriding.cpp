#include<bits/stdc++.h>
using namespace std;

class Animal{

    public:
        void bark(){
            cout << "Some Animal Barking" << endl;
        }
};

class Dog: public Animal{
     
    public:
        void bark(){
            cout << "Dog is barking" << endl;
        }
};


int main(){

    Dog d1;
    d1.bark();


    return 0;
}