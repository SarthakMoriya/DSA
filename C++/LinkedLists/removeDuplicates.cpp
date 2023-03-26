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

// Node *removeDuplicates(Node *head)
// {
//     Node *curr = head;

//     while (curr != NULL)
//     {
//         Node *forward = curr->next;
//         if (curr->data == forward->data)
//         {
//             curr->next = forward->next;
//             delete (forward);
//         }
//         else
//         {
//             curr = curr->next;
//         }
//     }
//     return head;
// }

Node *DeleteDuplicates(Node *head)
{
    Node *curr = head;
    Node *temp = curr->next;
    while (curr != NULL && temp != NULL)
    {
        Node* temp=curr->next;
        if(temp->data==curr->data)
        {
            curr->next = temp->next;
            temp->next=NULL;
            Node* toDelete=temp;
            temp=curr->next;
            delete toDelete;
        }
        else{
            curr = curr->next;
            for
        }
    }
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
int main()
{
    Node *head = new Node(10);
    Node *node1 = new Node(11);
    Node *node2 = new Node(11);
    Node *node3 = new Node(13);
    Node *node4 = new Node(14);

    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;
    // removeDuplicates(head);
    DeleteDuplicates(head);
    print(head);

    return 0;
}