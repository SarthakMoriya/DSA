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

bool check(Node *head)
{
    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == NULL)
        return false;
    if(temp==head)
    {
        cout<<"Circular List"<<endl;
        return true;
    }
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
    print(head);
    cout<<endl;
    cout<<check(head);

    return 0;
}