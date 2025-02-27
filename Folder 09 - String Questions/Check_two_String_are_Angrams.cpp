#include <iostream>
#include <algorithm>
using namespace std;

bool areAnagrams(char str1[], char str2[])
{
    int n1 = 0, n2 = 0;
    while (str1[n1] != '\0')
        n1++;
    while (str2[n2] != '\0')
        n2++;
    if (n1 != n2)
        return false;

    sort(str1, str1 + n1);
    sort(str2, str2 + n2);

    for (int i = 0; i < n1; i++)
    {
        if (str1[i] != str2[i])
            return false;
    }
    return true;
}

int main()
{
    char str1[] = "listen";
    char str2[] = "silent";
    if (areAnagrams(str1, str2))
        cout << "Anagrams";
    else
        cout << "Not Anagrams";
    return 0;
}