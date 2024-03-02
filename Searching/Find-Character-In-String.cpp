// Finding the First Occurrence of a Character in a String

#include <bits/stdc++.h>
using namespace std;
int findElement(string str, int n, char ch)
{
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ch)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    string str = "hello world";
    int n = str.length();
    char ch = 'o';
    cout << findElement(str, n, ch);
    return 0;
}