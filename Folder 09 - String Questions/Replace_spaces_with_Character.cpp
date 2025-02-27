#include <iostream>
using namespace std;

void replaceSpaces(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            str[i] = ch;
    }
}

int main()
{
    char str[] = "Hello World";
    replaceSpaces(str, '-');
    cout << str; // Output: Hello-World
    return 0;
}