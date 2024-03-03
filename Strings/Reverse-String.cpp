// Reverse a String

#include <bits/stdc++.h>
using namespace std;
void reverseString(string &str)
{
    int low = 0;
    int high = str.length() - 1;

    while (low < high)
    {
        swap(str[low], str[high]);
        low++;
        high--;
    }
}
int main()
{
    string str = "Raj";
    reverseString(str);
    cout<<str;
    return 0;
}