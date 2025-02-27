#include <iostream>
using namespace std;

char firstNonRepeatingChar(char str[])
{
    int count[256] = {0}; // Assuming ASCII characters
    for (int i = 0; str[i] != '\0'; i++)
    {
        count[str[i]]++;
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (count[str[i]] == 1)
            return str[i];
    }
    return '\0'; // If no non-repeating character found
}

int main()
{
    char str[] = "swiss";
    char result = firstNonRepeatingChar(str);
    if (result != '\0')
        cout << "First non-repeating character: " << result;
    else
        cout << "No non-repeating character found";
    return 0;
}