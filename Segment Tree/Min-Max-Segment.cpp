// Min Max Segment

#include <iostream>
#include <climits>
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

    tree[node] = max(tree[2 * node], tree[2 * node + 1]);
}

int query(int node, int st, int en, int l, int r)
{
    if (st > r || en < l)
    {
        return INT_MIN;
    }
    if (l <= st && en <= r)
    {
        return tree[node];
    }
    int mid = (st + en) / 2;
    int q1 = query(2 * node, st, mid, l, r);
    int q2 = query(2 * node + 1, mid + 1, en, l, r);
    return max(q1, q2);
}

void update(int node, int st, int en, int idx, int val)
{
    if (st == en)
    {
        a[st] = val;
        tree[node] = val;
        return;
    }
    int mid = (st + en) / 2;
    if (idx <= mid)
    {
        update(2 * node, st, mid, idx, val);
    }
    else
    {
        update(2 * node + 1, mid + 1, en, idx, val);
    }
    tree[node] = max(tree[2 * node], tree[2 * node + 1]);
}

int main()
{
    int n;
    cout << "Enter Size Of Array: ";
    cin >> n;
    cout << "Enter Numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    build(1, 0, n - 1);
    cout << "Segment Tree: ";
    for (int i = 0; i < 4 * n - 1; i++)
    {
        cout << tree[i] << " ";
    }
    cout << endl;

    while (true)
    {
        int type;
        cout << "\nEnter Type (-1 to exit, 1 for query, 2 for update): ";
        cin >> type;

        if (type == -1)
        {
            break;
        }
        if (type == 1)
        {
            int l, r;
            cout << "Enter l and r: ";
            cin >> l >> r;

            int ans = query(1, 0, n - 1, l, r);
            cout << "Query Result: " << ans << endl;
        }
        else if (type == 2)
        {
            int idx, val;
            cout << "Enter index and value to update: ";
            cin >> idx >> val;
            update(1, 0, n - 1, idx, val);
            cout << "Updated Segment Tree: ";
            for (int i = 0; i < 4 * n - 1; i++)
            {
                cout << tree[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
