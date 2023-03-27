#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void forwardTraverse(Node *head)
{
    if (head == NULL)
    {
        cout << "Empty LL!" << endl;
        return;
    }

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void backwardTraverse(Node *head)
{
    if (head == NULL)
    {
        cout << "Empty LL!" << endl;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // Set the temp to last node
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insertAtHead(Node *&head, int data)
{
    Node *nodeToInsert = new Node(data);

    if (head == NULL)
    {
        head = nodeToInsert;
        return;
    }
    head->prev = nodeToInsert;
    nodeToInsert->next = head;
    head = nodeToInsert;
}

void insertAtTail(Node *&head, int data)
{
    Node *node = new Node(data);

    if (head == NULL)
    {
        head = node;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node;
    node->prev = temp;
}

void insertByIndex(Node *head, int data, int index)
{
    Node *node = new Node(data);
    int count = 0;

    if (head == NULL)
    {
        head = node;
        return;
    }

    Node *temp = head;
    Node *prev = NULL;

    while (count < index - 1 && temp != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "please provide a valid index !";
        return;
    }

    if (prev == NULL)
    {
        insertAtHead(head, data);
        return;
    }
}

int main()
{
    Node *head = new Node(3);
    Node *n2 = new Node(4);

    head->next = n2;
    n2->prev = head;

    // FORWARD TRAVERSE
    // cout << "FORWARD TRAVERSE ::::";
    // forwardTraverse(head);
    // cout << "REVERSE TRAVERSE ::::";
    // backwardTraverse(head);

    cout << "After inserting at front:: ";
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    forwardTraverse(head);

    cout << "After inserting at end  :: ";
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    forwardTraverse(head);
    return 0;
}
