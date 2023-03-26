#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void InsertNode(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *reverse(Node *&head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
}

void reverseRecursive(Node *&head, Node *curr, Node *prev)
{

    // BASE CASE
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    Node *forward = curr->next;
    reverseRecursive(head, forward, curr);
    curr->next = prev;
}

Node *reversal(Node *&head)
{
    Node *prev = NULL;
    Node *curr = head;
    reverseRecursive(head, curr, prev);
    return head;
}

Node *KReverse(Node *&head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;
    int count = 0;

    while (count < k && curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    // 2) Recursion
    if (next != NULL)
    {
        head->next = KReverse(next, k);
    }
    return prev;
}

int main()
{
    Node *head = new Node(10);

    InsertNode(head, 11);
    InsertNode(head, 12);
    InsertNode(head, 13);
    InsertNode(head, 14);
    InsertNode(head, 15);
    InsertNode(head, 16);
    InsertNode(head, 17);

    print(head);
    cout<<endl;
    head=KReverse(head, 2);
    print(head);

    return 0;
}