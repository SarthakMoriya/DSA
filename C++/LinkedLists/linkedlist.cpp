#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node *&head, int data)
{
    Node *temp = new Node(data);//temp->next=NULL from constructor
    head->next = temp;
    head=temp;
    
}

void inserAtHead(Node* &head, int data)
{
    Node *temp = new Node(data);
    // temp->data = data;
    temp->next = head;
    // Head update hua or head->next is equl to head previous one
    head = temp;
}

void insertAtIndex(Node *&head,Node* tail, int data, int pos)
{
    Node *temp = head;
    int cnt = 1; // we are at first Node
    // If we want to insert at Head
    if (pos == 1)
    {
        inserAtHead(head, data);
        return;
    }
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // Insert at Tail/End
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    Node *InsertNode = new Node(data);
    InsertNode->next = temp->next;
    temp->next = InsertNode;
}

void traverse(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *node1 = new Node(12);
    Node *head = node1;
    Node* tail=node1;

    // cout<<head->data<<endl;
    // cout<<head->next;
    // inserAtHead(head, 15);
    // traverse(head);
    // cout << endl;
    // inserAtHead(head, 18);
    insertAtTail(tail, 13);
    insertAtTail(tail, 13);
    traverse(head);
    cout << endl;

    insertAtIndex(head,tail, 19, 4);
    // insertAtIndex(head, 19, 3);
    traverse(head);
    cout << endl;

    return 0;
}