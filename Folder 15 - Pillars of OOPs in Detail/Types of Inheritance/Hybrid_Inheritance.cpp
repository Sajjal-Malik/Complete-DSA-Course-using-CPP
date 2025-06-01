#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        void func1(){
            cout << "Inside function 1" << endl;
        }
};

class B{

    public:
        void func2(){
            cout << "Inside function 2" << endl;
        }
};

class C: public B{

    public:
        void func3(){
            cout << "Inside function 3" << endl;
        }
};

class D: public A, public B{

    public:
        void func4(){
            cout << "Inside function 4" << endl;
        }
};

int main(){

    C c1;
    c1.func2();    
    c1.func3();    


    D d1;
    d1.func1();
    d1.func2();
    d1.func4();

    return 0;
}