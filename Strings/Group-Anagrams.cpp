// Group Anagrams

#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> groups;
    for (string str : strs)
    {
        string key = str;
        sort(key.begin(), key.end());
        groups[key].push_back(str);
    }
    vector<vector<string>> result;
    for (auto it = groups.begin(); it != groups.end(); ++it)
    {
        result.push_back(it->second);
    }
    return result;
}

int main()
{
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagrams(strs);
    for (vector<string> group : result)
    {
        for (string str : group)
        {
            cout << str << " ";
        }
        cout << endl;
    }
    return 0;
}
