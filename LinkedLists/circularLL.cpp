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

void traverse(Node *tail)
{
    cout << "TRAVERSING..." << endl;
    // cout << tail->data << " ";;;
    if (tail == NULL)
    {
        cout << "empty LL!";
        return;
    }
    Node *temp = tail;
    do
    {
        temp = temp->next;
        cout << temp->data << " ";
    } while (temp != tail);
    cout << "\n";
}

void insertAtHead(Node *&tail, int data)
{
    Node *node = new Node(data);
    if (tail == NULL)
    {
        cout << "Reached here!" << endl;
        tail = node;
        return;
    }
    node->next = tail->next;
    tail->next = node;
}

void insertAtTail(Node *&tail, int data)
{
    Node *node = new Node(data);
    if (tail == NULL)
    {
        tail = node;
        return;
    }
    node->next = tail->next;
    tail->next = node;
    tail = node;
}

void insertAtIndex(Node *&tail, int data, int index)
{
    Node *node = new Node(data);
    if (index == 0)
    {
        // cout << "index:" << index << endl;
        insertAtHead(tail, data);
        return;
    }

    if (tail == NULL)
    {
        tail = node;
        return;
    }
    int count = 0;
    Node *temp = tail->next;

    while (count < index - 1 && temp != tail)
    {
        count++;
        // cout<<count<<" ";
        temp = temp->next;
    }
    if (temp == tail)
    {
        cout << "Invalid Index...!";
        return;
    }
    node->next = temp->next;
    temp->next = node;
}

void deleteAtHead(Node *&tail)
{
    if (tail == NULL)
    {
        cout << "Emplty LL cant delete" << endl;
        return;
    }
    if (tail->next == tail)
    {
        cout << "single node" << endl;
        // tail->next = NULL;
        // delete tail;
        tail = NULL;
        return;
    }
    // cout << "reached here!" << endl;
    Node *temp = tail->next;
    tail->next = temp->next;
    temp->next = NULL;
    delete temp;
}

void deleteAtTail(Node *&tail)
{
    if (tail == NULL)
    {
        cout << "Emplty LL cant delete" << endl;
        return;
    }
    Node *temp = tail->next;
    Node *prev = NULL;
    while (temp != tail)
    {
        prev = temp;
        temp = temp->next;
    }

    if (prev == NULL)
    {
        cout << "deleting at head... ";
        deleteAtHead(tail);
        return;
    }
    prev->next = tail->next;
    temp->next = NULL;
    tail = prev;
}

void deleteAtIndex(Node *&tail, int index)
{
    if (index == 0)
    {
        deleteAtHead(tail);
        return;
    }
    if (tail == NULL)
    {
        cout << "\nEmpty LL...!";
        return;
    }
    int count = 0;
    Node *prev = NULL;
    Node *temp = tail->next;
    while (count < index && temp != tail)
    {
        prev = temp;
        temp = temp->next;
        count++;
    }
    if (temp == tail)
    {
        cout << "\nDeleting from tail\n";
        deleteAtTail(tail);
        return;
    }
    prev->next = temp->next;
    temp->next = NULL;
    delete temp;
}

int main()
{
    Node *tail = new Node(1);
    tail->next = tail;

    cout << "Insert at Head:: ";
    insertAtHead(tail, 2);
    insertAtHead(tail, 3);
    insertAtHead(tail, 4);
    traverse(tail);

    cout << "Insert at Tail:: ";
    insertAtTail(tail, 0);
    insertAtTail(tail, -1);
    insertAtTail(tail, -2);
    traverse(tail);

    cout << "Insert at Index:: ";
    insertAtIndex(tail, 5, 0);
    insertAtIndex(tail, 6, 2);
    traverse(tail);

    cout << "Delete at Head:: ";
    deleteAtHead(tail);
    deleteAtHead(tail);
    traverse(tail);

    cout << "Delete at Tail:: ";
    deleteAtTail(tail);
    deleteAtTail(tail);
    traverse(tail);

    cout << "Delete at Index:: ";
    deleteAtIndex(tail, 1);
    deleteAtIndex(tail, 2);
    deleteAtIndex(tail, 0);
    // cout << "\n" << tail->data << " " << tail->next->data << endl;
    deleteAtIndex(tail, 1);
    deleteAtIndex(tail, 1);//2bacha tha isse phele
    traverse(tail);

    return 0;
}