#include <iostream>
using namespace std;

void removeDuplicates(char str[])
{
    bool visited[256] = {false}; // Assuming ASCII characters
    int index = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (!visited[ch])
        {
            str[index++] = ch;
            visited[ch] = true;
        }
    }
    str[index] = '\0'; // Terminate the string
}

int main()
{
    char str[] = "programming";
    removeDuplicates(str);
    cout << str; // Output: progamin
    return 0;
}