// Largest Subarray with Zero Sum

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int largestSubarrayWithZeroSum(vector<int> &nums)
{
    unordered_map<int, int> prefixSum;
    int maxLength = 0;
    int sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum == 0)
        {
            maxLength = i + 1;
        }
        else
        {
            if (prefixSum.find(sum) != prefixSum.end())
            {
                maxLength = max(maxLength, i - prefixSum[sum]);
            }
            else
            {
                prefixSum[sum] = i;
            }
        }
    }
    return maxLength;
}
int main()
{
    vector<int> nums = {15, -2, 2, -8, 1, 7, 10, 23};
    int maxLength = largestSubarrayWithZeroSum(nums);
    cout << "Largest Subarray With Zero Sum : " << maxLength << endl;
    return 0;
}