// Longest Consecutive Sequence

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int longestConsecutive(vector<int> &nums)
{
    unordered_set<int> numSet(nums.begin(), nums.end());

    int longestSequence = 0;
    for (int num : nums)
    {
        if (!numSet.count(num - 1))
        {
            int currentNum = num;
            int currentSequence = 1;

            while (numSet.count(currentNum + 1))
            {
                currentNum++;
                currentSequence++;
            }
            longestSequence = max(longestSequence, currentSequence);
        }
    }
    return longestSequence;
}
int main()
{
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    int longest = longestConsecutive(nums);
    cout << "Longest Consecutive Sequence Length Is: " << longest << endl;
    return 0;
}
