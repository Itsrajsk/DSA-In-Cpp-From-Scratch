//  First Negative Integer In Every Window Of Size K

#include <bits/stdc++.h>
using namespace std;
void printFirstNegative(long long int A[], long long int N, long long int K)
{
    deque<long long int> dq;
    vector<long long int> ans;

    for (int i = 0; i < K; i++)
    {
        if (A[i] < 0)
        {
            dq.push_back(i);
        }
    }
    if (dq.size() > 0)
    {
        ans.push_back(A[dq.front()]);
    }
    else
    {
        ans.push_back(0);
    }

    for (int i = K; i < N; i++)
    {
        if (!dq.empty() && i - dq.front() >= K)
        {
            dq.pop_front();
        }

        if (A[i] < 0)
        {
            dq.push_back(i);
        }

        if (dq.size() > 0)
        {
            ans.push_back(A[dq.front()]);
        }
        else
        {
            ans.push_back(0);
        }
    }

    for (int i = 0; i < N - 1; i++)
    {
        cout << ans[i] << " ";
    }
}
void printAns(vector<long long int> &ans, long long int N)
{
}
int main()
{
    long long int A[] = {-8, 2, 3, -6, 10};
    long long int K = 2;
    long long N = sizeof(A) / sizeof(A[0]);
    printFirstNegative(A, N, K);
    return 0;
}