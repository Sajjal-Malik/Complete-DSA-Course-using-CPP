#include <iostream>
using namespace std;

int main()
{

        int num1;
        cout << "Enter the value of num1" << endl;
        cin >> num1;

        int num2;
        cout << "Enter the value of num2" << endl;
        cin >> num2;

        char operation;
        cout << "Enter the operation you want to perform ( + - * / % )" << endl;
        cin >> operation;

        switch (operation)
        {
        case '+':
                cout << "The sum of num1 and num2 is: " << num1 + num2 << endl;
                break;
        case '-':
                cout << "The subtract of num1 and num2 is: " << num1 - num2 << endl;
                break;
        case '*':
                cout << "The multiple of num1 and num2 is: " << num1 * num2 << endl;
                break;
        case '/':
                cout << "The division of num1 and num2 is: " << num1 / num2 << endl;
                break;
        case '%':
                cout << "The mod of num1 and num2 is: " << num1 % num2 << endl;
                break;

        default:
                cout << "Invalid Operation (valid operations are those which are mentioned above)" << endl;
                break;
        }

        return 0;
}