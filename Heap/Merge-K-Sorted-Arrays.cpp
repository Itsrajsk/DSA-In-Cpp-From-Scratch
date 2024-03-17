// Merge K Sorted Arrays

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Define a class for node
class node
{
public:
    int data;
    int i;
    int j;

    node(int data, int row, int col)
    {
        this->data = data;
        i = row;
        j = col;
    }
};

// Define a comparison function
class compare
{
public:
    bool operator()(const node *a, const node *b)
    {
        return a->data > b->data; // Min heap comparison
    }
};

vector<int> mergeKSortedArrays(vector<vector<int>> &kArrays, int k)
{
    // Define min heap using priority_queue
    priority_queue<node *, vector<node *>, compare> minHeap;

    for (int i = 0; i < k; i++)
    {
        node *tmp = new node(kArrays[i][0], i, 0);
        minHeap.push(tmp);
    }

    vector<int> ans;
    while (!minHeap.empty())
    {
        node *tmp = minHeap.top();

        ans.push_back(tmp->data);
        minHeap.pop();
        int i = tmp->i;
        int j = tmp->j;
        delete tmp;

        if (j + 1 < kArrays[i].size())
        {
            node *next = new node(kArrays[i][j + 1], i, j + 1);
            minHeap.push(next);
        }
    }
    return ans;
}

int main()
{
    // Testcase
    vector<vector<int>> kArrays = {{1, 3, 5}, {2, 4, 6}, {0, 7, 8}};
    int k = 3;

    vector<int> result = mergeKSortedArrays(kArrays, k);

    cout << "Merged sorted array: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
