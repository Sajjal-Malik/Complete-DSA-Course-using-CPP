#include <iostream>
using namespace std;

int countVowels(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[] = "Hello World";
    cout << "Number of vowels: " << countVowels(str);
    return 0;
}