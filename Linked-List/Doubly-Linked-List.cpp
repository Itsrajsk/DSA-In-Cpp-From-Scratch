// Doubly Linked List

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtHead(Node *&head, Node *&tail, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertAtTail(Node *&head, Node *&tail, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    // Inserting At Head
    if (position == 1)
    {
        insertAtHead(head, tail, d);
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
        insertAtTail(head, tail, d);
        return;
    }
    Node *NodeToInsert = new Node(d);

    NodeToInsert->next = temp->next;
    temp->next->prev = NodeToInsert;
    temp->next = NodeToInsert;
    NodeToInsert->prev = temp;
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
        if(curr->next==NULL)
        {
            tail=prev;
        }
        curr->prev=NULL;
        prev->next = curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int getLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertAtHead(head, tail, 11);
    insertAtHead(head, tail, 12);
    insertAtHead(head, tail, 13);
    insertAtHead(head, tail, 14);
    insertAtTail(tail, tail, 15);
    insertAtPosition(head, tail, 7, 20);
    print(head);
    cout<<endl;
    deleteNode(7,head,tail);
    print(head);
    return 0;
}