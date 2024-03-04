// Count Subarrays with Xor as K

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int countSubarraysWithXorK(vector<int> &nums, int K)
{
    unordered_map<int, int> prefixXor;
    int count = 0;
    int xorSum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        xorSum ^= nums[i];
        if (xorSum == K)
        {
            count++;
        }

        if (prefixXor.find(xorSum ^ K) != prefixXor.end())
        {
            count += prefixXor[xorSum ^ K];
        }
        prefixXor[xorSum]++;
    }
    return count;
}
int main()
{
    vector<int> nums = {4, 2, 2, 6, 4};
    int K = 6;
    int count = countSubarraysWithXorK(nums, K);
    cout << "Number Of Subarrays With Xor As K Is : " << count << endl;
    return 0;
}