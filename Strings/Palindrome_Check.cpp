// Program to Check for Palindrome String

#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(string str)
{
    int low = 0;
    int high = str.length() - 1;
    while (low < high)
    {
        // if 1st and last is not equal then return false
        if (str[low] != str[high])
        {
            return false;
        }
        // otherwise move low++ and high--
        low++;
        high--;
    }
    return true;
}
int main()
{
    string str = "NAMAN";
    if (checkPalindrome(str))
    {
        cout << str << " is Palindrome" << endl;
    }
    else
    {
        cout << str << " not a Palindrome" << endl;
    }
    return 0;
}