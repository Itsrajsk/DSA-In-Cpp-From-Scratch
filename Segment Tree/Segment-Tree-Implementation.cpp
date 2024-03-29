// Segment Tree Implementation

#include <iostream>
using namespace std;
const int N = 1e5 + 2;
int a[N], tree[4 * N];

void build(int node, int st, int en)
{
    if (st == en)
    {
        tree[node] = a[st];
        return;
    }

    int mid = (st + en) / 2;
    build(2 * node, st, mid);
    build(2 * node + 1, mid + 1, en);

    tree[node] = tree[2 * node] + tree[2 * node + 1];
}
int main()
{
    int n;
    cout << "Enter Size Of Array: " << endl;
    cin >> n;
    cout << "Enter Numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    build(1, 0, n - 1);
    cout << "Printing Segment Tree: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << tree[i] << " ";
    }
    return 0;
}