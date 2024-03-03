//  Implement strStr()

#include <iostream>
#include <string>

using namespace std;

int strStr(string haystack, string needle)
{
    if (needle.empty())
        return 0;
    int m = haystack.length(), n = needle.length();
    for (int i = 0; i <= m - n; i++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if (haystack[i + j] != needle[j])
            {
                break;
            }
        }
        if (j == n)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string haystack = "Hello", needle = "lo";
    cout << strStr(haystack, needle);
    return 0;
}
