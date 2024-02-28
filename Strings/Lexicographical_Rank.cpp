// Lexicographic rank of a String

#include <bits\stdc++.h>
using namespace std;
#define MAX_CHAR 256
// For Calculating Factorial
int fact(int n)
{
    // There Is A Base Case And Recursive Call Is Their
    return (n <= 1) ? 1 : n * fact(n - 1);
}
void populateAndIncrease(int *count, string str)
{
    int i;

    for (i = 0; str[i]; ++i)
    {
        ++count[str[i]];
    }
    for (i = 1; i < MAX_CHAR; ++i)
    {
        count[i] += count[i - 1];
    }
}
void updatecount(int *count, char ch)
{
    int i;
    for (i = ch; i < MAX_CHAR; ++i)
    {
        --count[i];
    }
}
int findRank(string str)
{
    int len = str.size();
    int mul = fact(len);
    int rank = 1, i;
    int count[MAX_CHAR] = {0};
    populateAndIncrease(count, str);
    for (i = 0; i < len; ++i)
    {
        mul /= len - i;

        rank += count[str[i] - 1] * mul;

        updatecount(count, str[i]);
    }
    return rank;
}
int main()
{
    string str = "raj";

    cout << findRank(str);
    return 0;
}