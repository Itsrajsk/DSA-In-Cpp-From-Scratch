// Singly Linked List Implementation

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
void insertAtTail(Node *&tail, int d)
{
    // New Node Created
    Node *temp = new Node(d);

    tail->next = temp;
    tail = temp;
}
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // Inserting At Head
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // Inserting At Tail
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
    Node *NodeToInsert = new Node(d);

    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}
void deleteNode(int position, Node *&head, Node *&tail)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        if (curr->next == NULL)
        {
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << " | " << temp->data << " --> "; // Printing Data
        cout << temp->next << " | ";
        temp = temp->next; // Putting Next Node Address In Temp
    }
    cout << endl;
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    cout << "\nInsert At Head" << endl;
    insertAtHead(head, 12);
    print(head);
    cout << "\nInsert At Tail" << endl;
    insertAtTail(tail, 15);
    print(head);
    cout << "\nInsert At Position" << endl;
    insertAtPosition(head, tail, 4, 20);
    print(head);

    cout << "Deleting Node" << endl;
    deleteNode(4, head, tail);
    print(head);
    cout << "Head :" << head->data << endl;
    cout << "Tail :" << tail->data << endl;
    return 0;
}