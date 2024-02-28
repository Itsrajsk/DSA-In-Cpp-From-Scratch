// Find the first repeated character in a string

#include <bits/stdc++.h>
#include <string>
using namespace std;

string firstRepeatedChar(string s)
{
    int a[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (a[ch - 'a'] != 0)
            return string(1, ch);
        else
            a[ch - 'a']++;
    }

    return "-1";
}

int main()
{

    string str = "aaaaaaaaa";
    cout << firstRepeatedChar(str);

    return 0;
}