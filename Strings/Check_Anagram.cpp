// Check whether two Strings are anagram of each other

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string str1, string str2)
{
    unordered_map<char, int> Map;
    // Counting The Frequency Of Characters In The String
    for (int i = 0; i < str1.length(); i++)
    {
        Map[str1[i]]++;
    }
    // Cross Checking frequency str2 characters in Map And Decrementing the count
    for (int i = 0; i < str2.length(); i++)
    {
        if (Map.find(str2[i]) != Map.end())
        {
            Map[str2[i]] -= 1;
        }
    }
    // Now We Checking If 0 Are Present Or Not In Map
    // If 0's Present Means Our Strings Are Anagram
    for (auto items : Map)
    {
        if (items.second != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string str1 = "anagram";
    string str2 = "nagaram";
    if (isAnagram(str1, str2))
    {
        cout << "This Strings Are Anagram :)" << endl;
    }
    else
    {
        cout << "This Strings Are Not Anagram :(" << endl;
    }
    return 0;
}