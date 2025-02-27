#include <iostream>
using namespace std;

void reverseString(char str[])
{
    int n = 0;
    while (str[n] != '\0')
        n++; // Find length of the string
    int left = 0, right = n - 1;
    while (left < right)
    {
        swap(str[left], str[right]);
        left++;
        right--;
    }
}

int main()
{
    char str[] = "hello";
    reverseString(str);
    cout << str; // Output: olleh
    return 0;
}