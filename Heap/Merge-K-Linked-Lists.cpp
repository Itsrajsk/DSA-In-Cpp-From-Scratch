// Merge K Linked List

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Definition of Node class
template <typename T>
class Node
{
public:
    T data;
    Node *next;

    Node(T data) : data(data), next(nullptr) {}
};

// Define a comparison function
template <typename T>
class compare
{
public:
    bool operator()(const Node<T> *a, const Node<T> *b) const
    {
        return a->data > b->data; // Min heap comparison
    }
};

// Merge k sorted linked lists
template <typename T>
Node<T> *mergeKLists(vector<Node<T> *> &listArray)
{
    // Define min heap using priority_queue
    priority_queue<Node<T> *, vector<Node<T> *>, compare<T>> minHeap;

    int k = listArray.size();

    // Check if listArray is empty
    if (k == 0)
    {
        return nullptr;
    }

    // Push the heads of all non-empty lists into minHeap
    for (int i = 0; i < k; i++)
    {
        if (listArray[i] != nullptr)
        {
            minHeap.push(listArray[i]);
        }
    }

    Node<T> *head = nullptr;
    Node<T> *tail = nullptr;

    // Merge the lists
    while (!minHeap.empty())
    {
        Node<T> *top = minHeap.top();
        minHeap.pop();

        if (top->next != nullptr)
        {
            minHeap.push(top->next);
        }

        if (head == nullptr)
        {
            head = top;
            tail = top;
        }
        else
        {
            tail->next = top;
            tail = top;
        }
    }
    return head;
}

// Utility function to print the merged linked list
template <typename T>
void printList(Node<T> *head)
{
    Node<T> *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    // Testcase
    Node<int> *head1 = new Node<int>(1);
    head1->next = new Node<int>(3);
    head1->next->next = new Node<int>(5);

    Node<int> *head2 = new Node<int>(2);
    head2->next = new Node<int>(4);
    head2->next->next = new Node<int>(6);

    Node<int> *head3 = new Node<int>(0);
    head3->next = new Node<int>(7);
    head3->next->next = new Node<int>(8);

    vector<Node<int> *> listArray = {head1, head2, head3};

    Node<int> *mergedHead = mergeKLists(listArray);

    cout << "Merged Linked List: ";
    printList(mergedHead);

    // Free memory
    Node<int> *current = mergedHead;
    while (current != nullptr)
    {
        Node<int> *next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
