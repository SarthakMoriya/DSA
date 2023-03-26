#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constrcutor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertNodeAtTail(Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        temp->next = temp;
        tail = temp;
    }
    Node *temp = new Node(data);
    Node *forward = tail->next;
    temp->next = forward;
    tail->next = temp;
    tail = temp;
}

bool detectLoop(Node *head)
{
    Node *fast = head;
    Node *slow = head;

    while (fast->next != NULL)
    {
        fast = fast->next;
        if (fast->next != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
            return 1;
    }
    return 0;
}
Node *LocationLoop(Node *head)
{
    Node *fast = head;
    Node *slow = head;

    while (fast->next != NULL)
    {
        fast = fast->next;
        if (fast->next != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;

        if (slow == fast)
            return slow;
    }
    return 0;
}

Node *getStartingNode(Node *head, Node *intersection)
{
    Node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

Node* deleteLoop(Node *&startNode)
{
    Node* deleteNode=startNode->next;

    while(deleteNode->next != startNode)
    {
        deleteNode= deleteNode->next;
    }
    cout<<"Deleting node with data ::"<<deleteNode->data;
    delete deleteNode;
}

void print(Node *tail)
{
    if (tail == NULL)
    {
        cout << "Empty List";
        return;
    }

    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
}
int main()
{
    Node *head = new Node(10);
    Node *node1 = new Node(11);
    Node *node2 = new Node(12);
    Node *node3 = new Node(13);
    Node *node4 = new Node(14);
    Node *node5 = new Node(15);
    Node *node6 = new Node(16);
    head->next=node1;
    node1->next=node2;
    node2->next=node3;
    node3->next=node4;
    node4->next=node5;
    node5->next=node6;
    node6->next=node3;
    // Node *tail = new Node(11);
    // Node* tail=NULL;
    // head->next = tail;
    // tail->next = head;
    // cout << "Tail::" << tail->data << endl;
    // cout << "Head::" << head->data << endl;
    // insertNodeAtTail(tail, 12);
    // insertNodeAtTail(tail, 13);
    // insertNodeAtTail(tail, 14);

    // print(head);
    // cout << endl;
    // cout << "Tail::" << tail->data << endl;
    // cout << "Head::" << head->data << endl;
    // cout << detectLoop(head);
    Node *slow = LocationLoop(head);
    Node *startNode = getStartingNode(head, slow);
    cout<<endl;
    cout << "Starting Node::" <<startNode->data;
    deleteLoop(startNode);

        return 0;
}