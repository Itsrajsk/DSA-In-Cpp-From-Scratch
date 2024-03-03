//  String to Integer (atoi)

#include <bits/stdc++.h>
using namespace std;
int strToInt(string s)
{
    int i = 0, sign = 1, result = 0;
    while (i < s.length() && s[i] == ' ')
    {
        i++;
        if (s[i] == '+' || s[i] == '-')
        {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
    }

    while (i < s.length() && isdigit(s[i]))
    {
        int digit = s[i] - '0';
        result = result * 10 + digit;
        i++;
    }
    return result;
}
int main()
{
    string s = "2004";
    cout << strToInt(s);
    return 0;
}