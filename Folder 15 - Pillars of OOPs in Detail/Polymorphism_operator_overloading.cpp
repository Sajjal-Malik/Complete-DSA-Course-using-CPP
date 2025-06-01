#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    float real, imag;

public:
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }

    // Overload + operator
    Complex operator+(const Complex &obj)
    {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(2.5, 3.5), c2(1.5, 2.5);
    Complex c3 = c1 + c2; // Uses overloaded + operator
    c3.display();
    return 0;
}
