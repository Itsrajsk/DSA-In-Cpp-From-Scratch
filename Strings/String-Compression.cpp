// String Compression

#include <bits/stdc++.h>
using namespace std;
string scomp(string s)
{
    string compression;
    int count = 1;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (i + 1 < n && s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            compression += s[i] + to_string(count);
            count = 1;
        }
    }
    return (compression.length() < s.length()) ? compression : s;
}
int main()
{
    string s = "aaaabbbcccc";
    cout << scomp(s);
    return 0;
}