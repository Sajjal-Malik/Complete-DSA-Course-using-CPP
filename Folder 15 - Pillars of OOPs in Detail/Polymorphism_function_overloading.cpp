#include <bits/stdc++.h>
using namespace std;

class A
{

public:
    void sayHello()
    {
        cout << "Hello Malik" << endl;
    }

    void sayHello(string name)
    {
        cout << "Hello " << name << endl;
    }

    int sayHello(string name, int age)
    {
        cout << "Hello " << name << " your age is " << age << endl;
        return 1;
    }
};

int main()
{

    return 0;
}