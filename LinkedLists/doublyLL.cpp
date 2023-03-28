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
void deleteAtHead(Node *&head);

void forwardTraverse(Node *head)
{
    // cout<<head->data;
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
void backwardTraverse(Node *&head)
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

void insertByIndex(Node *&head, int data, int index)
{
    Node *node = new Node(data);
    int count = 0;

    if (head == NULL)
    {
        head = node;
        return;
    }

    Node *temp = head;

    if (index == 0)
    {
        insertAtHead(head, data);
        return;
    }

    // 1---2---3 index=3
    while (count < index - 1 && temp->next != NULL)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(head, data);
        return;
    }

    node->next = temp->next;
    temp->next->prev = node;
    temp->next = node;
    node->prev = temp;
}

void deleteAtHead(Node *&head)
{
    if (head == NULL)
    {
        cout << "Can't perform deletion on Emplty LL";
        return;
    }
    // cout << "reached HERE";
    Node *temp = head;
    // cout<<"\n"<<head->data;
    if (head->next != NULL)
    {
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
        return;
    }
    else
    {
        head = NULL;
        return;
    }
}

void deleteAtTail(Node *&head)
{
    if (head == NULL)
    {
        cout << "Can't perform deletion on Emplty LL";
        return;
    }

    Node *temp = head;
    Node *prev = NULL;

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    if (prev == NULL)
    {
        cout << "\nHead Deletion!" << endl;
        deleteAtHead(head);
        return;
    }
    prev->next = NULL;
    temp->prev = NULL;
    delete temp;
}

void deleteAtIndex(Node *&head, int index)
{
    if (index == 0)
    {
        deleteAtHead(head);
        return;
    }

    if (head == NULL)
    {
        cout << "Head Deletion not Possible on emplty LL!";
        return;
    }

    Node *prev = NULL;
    Node *temp = head;
    int count = 0;
    while (count < index && temp != NULL)
    {
        prev = temp;
        temp = temp->next;
        count++;
    }

    if(temp == NULL){
        cout<<"Node Deletion Not Possible please provide valid Index...!";
        return;
    }
    temp->next->prev = temp->prev;
    prev->next = temp->next;

    cout << "\nNode to be deleted's data::" << temp->data<<endl;
    temp->next = NULL;
    temp->prev = NULL;
    delete temp;
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

    cout << "After inserting at Any Index  :: ";
    insertByIndex(head, 7, 6);
    insertByIndex(head, 0, 0);
    forwardTraverse(head);

    cout << "After Deleting At Head  :: ";
    deleteAtHead(head);
    deleteAtHead(head);
    forwardTraverse(head);

    // cout << "After Deleting At Tail  :: ";
    // deleteAtTail(head);
    // deleteAtTail(head);
    // deleteAtTail(head);
    // deleteAtTail(head);
    // deleteAtTail(head);
    // deleteAtTail(head);
    // deleteAtTail(head); // Now head is  NULL at this line
    // forwardTraverse(head);

    cout << "After Deleting At Index  :: ";
    deleteAtIndex(head,0);
    deleteAtIndex(head,32);
    forwardTraverse(head);
    return 0;
}
