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

void insertNodeAtTail(Node * &tail,int data)
{
    if(tail==NULL)
    {
        Node* temp= new Node(data);
        temp->next=temp;
        tail=temp;
    }
    Node* temp= new Node(data);
    Node* forward=tail->next;
    temp->next=forward;
    tail->next=temp;
    tail=temp;

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
    Node* tail=new Node(11);
    // Node* tail=NULL;
    head->next=tail;
    tail->next = head;
    cout<<"Tail::"<<tail->data<<endl;
    cout<<"Head::"<<head->data<<endl;
    insertNodeAtTail(tail,12);
    insertNodeAtTail(tail,13);
    insertNodeAtTail(tail,14);
    print(head);
    cout<<endl;
    cout<<"Tail::"<<tail->data<<endl;
    cout<<"Head::"<<head->data<<endl;

    return 0;
}