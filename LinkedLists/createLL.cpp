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

void traverse(Node *head)
{
    if (!head)
    {
        cout << "No head node!" << endl;
        return;
    }

    Node *temp = head;

    while (temp != NULL)
    {
        cout << "Data:" << temp->data << endl;
        temp = temp->next;
    }
}
Node *insertAtHead(Node *head, int data)
{
    // Create a new Node
    Node *temp = new Node(data);
    cout << temp->data << endl;
    if (head == NULL)
    {
        head = temp;
        return head;
    }

    temp->next = head;
    head = temp;
    // traverse(head);
    return head;
}
void insertAtHeadWithReference(Node *&head, int data)
{
    // Create a new Node
    Node *temp = new Node(data);
    cout << temp->data << endl;
    if (head == NULL)
    {
        head = temp;
        return;
    }

    temp->next = head;
    head = temp;
    // traverse(head);
}

void insertAtTail(Node *&head, int data)
{
    // Create a new Node
    Node *nodeToInsert = new Node(data);

    if (head == NULL)
    {
        head = nodeToInsert;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = nodeToInsert;
}

int countNodes(Node *head)
{
    Node *temp = head;
    int count = 0;
    if (head == NULL)
        return count;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtIndex(Node *&head, int data, int index)
{
    int length = countNodes(head);
    if (index == 0)
    {
        insertAtHeadWithReference(head, data);
        return;
    }

    if (index != 0 && (length == 0 || head == NULL || index > length))
    {
        cout << "Cannot Insert at provided Index " << endl;
    }
    int count = 0;
    Node *temp = head;
    while (count < index - 1)
    {
        temp = temp->next;
        count++;
    }

    Node *node = new Node(data);
    node->next = temp->next;
    temp->next = node;
}

void deleteAtHead(Node *&head)
{
    if (head == NULL)
    {
        cout << "Empty LL cannot perform deletion!";
        return;
    }

    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
}

void deleteAtTail(Node *&head)
{
    if (head == NULL)
    {
        cout << "Empty LL cannot perform deletion!";
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
        deleteAtHead(head);
        return;
    }
    prev->next = NULL;
    delete temp;
}

void deleteByValue(Node *&head, int data)
{
    if (head == NULL)
    {
        cout << "Empty LL cannot perform deletion!";
        return;
    }

    Node *prev = NULL;
    Node *temp = head;

    while (temp != NULL && temp->data != data)
    {
        prev = temp;
        temp = temp->next;
    }

    if (prev == NULL) // First node is to be deleted
    {
        deleteAtHead(head);
        return;
    }
    if (temp == NULL)
    {
        cout << "Node not present!";
        return;
    }

    prev->next = temp->next;
    temp->next = NULL;
    delete temp;
}

int main()
{
    Node *head = new Node(10);
    Node *n1 = new Node(11);
    Node *n2 = new Node(12);
    Node *n3 = new Node(13);

    head->next = n1;
    n1->next = n2;
    n2->next = n3;

    // cout << head->next << endl;
    // cout << n1;
    // traverse(head);
    // traverse(NULL);
    // cout << "Old HEAD DATA::" << head->data << endl;
    // head = insertAtHead(head, 9);
    insertAtHeadWithReference(head, 9);
    // cout << "New HEAD DATA::" << head->data << endl;
    // cout << "BEFORE INSERTION" << endl;
    // traverse(head);
    // cout << "AFTER INSERTION" << endl;
    insertAtTail(head, 14);
    // traverse(head);

    // cout << "Number of nodes::" << countNodes(head) << endl;

    // cout << "Before Deletion:::" << endl;

    insertAtIndex(head, 15, 6);

    insertAtIndex(head, 8, 0);

    traverse(head);

    // deleteAtHead(head);

    // deleteAtTail(head);

    // deleteAtTail(head);

    // deleteAtTail(head);

    // deleteAtTail(head);

    // cout << "After Deletion:::" << endl;

    // deleteAtTail(head);

    // traverse(head);

    cout << "\n";
    deleteByValue(head, 15);
    traverse(head);
    cout << "\n";
    deleteByValue(head, 13);
    traverse(head);

    return 0;
}