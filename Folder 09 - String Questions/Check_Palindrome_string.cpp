#include <iostream>
using namespace std;

bool isPalindrome(char str[])
{
    int n = 0;
    while (str[n] != '\0')
        n++; // Find length of the string
    int left = 0, right = n - 1;
    while (left < right)
    {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }
    return true;
}

int main()
{
    char str[] = "madam";
    if (isPalindrome(str))
        cout << "Palindrome";
    else
        cout << "Not a Palindrome";
    return 0;
}