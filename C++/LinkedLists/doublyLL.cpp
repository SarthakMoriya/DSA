#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // CONSTRUCTOR
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void traverse(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int length(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtHead(Node *&head, Node *&tail, int data)
// IF HEAD AND TAIL ARE NULL
{
    // EMPTY LIST
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertAtTail(Node *&tail, Node *&head, int data)
// IF HEAD AND TAIL ARE NULL
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;

        tail = temp;
    }
}
void insertAtAnyIndex(Node *&head, Node *&tail, int data, int pos)
{
    Node *temp = head;
    int cnt = 1;
    // INSERT AT HEAD
    if (pos == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // INSERT AT TAIL
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, data);
        return;
    }

    Node *NodeToInsert = new Node(data);
    NodeToInsert->prev = temp;
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}

void deleteNode(Node *&head, Node *&tail,int pos)
{
    if(pos==1)
    {
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* current=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<pos)
        {
            prev=current;
            current=current->next;
            cnt++;
        }
        prev->next=current->next;
        tail=prev;
        delete current;
    }
}

int main()
{
    // Node *node1 = new Node(10);
    // Node *node2 = new Node(11);
    Node *tail = NULL;
    // node1->next = node2;
    // node2->prev = node1;

    Node *head = NULL;
    insertAtHead(head, tail, 25);
    // cout << "Tail::" << tail->data << endl;
    // cout << "Head::" << head->data << endl;
    // traverse(head);

    insertAtHead(head, tail, 21);
    // cout << "Tail::" << tail->data << endl;
    // cout << "Head::" << head->data << endl;
    // traverse(head);

    insertAtHead(head, tail, 23);
    // cout << "Head::" << head->data << endl;
    // cout << "Tail::" << tail->data << endl;
    // traverse(head);

    insertAtTail(tail, head, 31);
    // cout << "Tail::" << tail->data << endl;
    // cout << "Head::" << head->data << endl;
    // traverse(head);

    insertAtTail(tail, head, 34);
    // cout << "Tail::" << tail->data << endl;
    // cout << "Head::" << head->data << endl;
    // traverse(head);

    insertAtTail(tail, head, 32);
    // cout << "Tail::" << tail->data << endl;
    // cout << "Head::" << head->data << endl;
    // traverse(head);

    // cout << "Tail::" << tail->data << endl;
    insertAtAnyIndex(head, tail, 22, 1);
    // cout << "Tail::" << tail->data << endl;
    // cout << "Head::" << head->data << endl;
    // traverse(head);

    insertAtAnyIndex(head, tail, 2, 2);
    // cout << "Tail::" << tail->data << endl;
    // cout << "Head::" << head->data << endl;
    // traverse(head);

    insertAtAnyIndex(head, tail, 32, 6);
    // cout << "Tail::" << tail->data << endl;
    // cout << "Head::" << head->data << endl;
    traverse(head);


    cout << "Tail::" << tail->data << endl;
    cout << "Head::" << head->data << endl;
    deleteNode(head,tail,9);
    traverse(head);
    // cout<<"Length::"<<length(head);

    return 0;
}