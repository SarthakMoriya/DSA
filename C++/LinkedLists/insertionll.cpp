#include <iostream>
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
};
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void insertAtIndex(Node *&head, Node *&tail, int data, int pos)
{
    Node *temp = head;
    int cnt = 1;

    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }

    while (cnt < pos)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
    }

    Node *element = new Node(data);
    element->next = temp->next;
    temp->next = element;
}
void traversal(Node *head)
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
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertAtHead(head, 12);
    insertAtHead(head, 13);
    cout << "Head::" << head->data << endl;
    insertAtTail(tail, 19);
    insertAtIndex(head, tail, 20, 1);
    insertAtIndex(head, tail, 20, 5);
    cout << "Tail::" << tail->data << endl;
    traversal(head);
    return 0;
}