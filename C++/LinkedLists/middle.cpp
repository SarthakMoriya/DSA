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

int lengthLL(Node *head)
{
    int len=0;
    while(head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}


Node* middleVal(Node *head,int len)
{
    int ans=len/2;
    int count=0;
    Node* temp=head;
    while(count<ans)
    {
        temp = temp->next;
        count++;
    }
    return temp;
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
    int len=lengthLL(head);
    print(head);
    cout<<endl;
    cout<<"Length::"<<lengthLL(head)<<endl;
    Node* temp=middleVal(head,len);
    cout<<"Middle Value::"<<temp->data<<endl;


    return 0;
}