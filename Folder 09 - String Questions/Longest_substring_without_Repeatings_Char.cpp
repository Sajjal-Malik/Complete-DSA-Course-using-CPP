#include <iostream>
#include <unordered_set>
using namespace std;

int longestSubstringWithoutRepeating(char str[])
{
    int n = 0;
    while (str[n] != '\0')
        n++; // Find length of the string
    unordered_set<char> charSet;
    int left = 0, maxLen = 0;
    for (int right = 0; right < n; right++)
    {
        while (charSet.find(str[right]) != charSet.end())
        {
            charSet.erase(str[left]);
            left++;
        }
        charSet.insert(str[right]);
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}

int main()
{
    char str[] = "abcabcbb";
    cout << "Length of longest substring without repeating characters: " << longestSubstringWithoutRepeating(str);
    return 0;
}