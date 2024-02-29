// Intersection of two unsorted arrays

#include <bits/stdc++.h>
using namespace std;
void print_intersection(int *a, int *b, int n, int m)
{
    set<int> st;
    // Inserting first array elements in set
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }
    // checking second array elements in set if finds then we erase it and print it
    for (int i = 0; i < m; i++)
    {
        if (st.find(b[i]) != st.end())
        {
            st.erase(b[i]);
            cout << b[i] << " ";
        }
    }
}
int main()
{
    int a[7] = {1, 2, 23, 3, 4, 5, 4};

    int b[5] = {12, 23, 4, 3, 1};

    print_intersection(a, b, 7, 5);
    return 0;
}