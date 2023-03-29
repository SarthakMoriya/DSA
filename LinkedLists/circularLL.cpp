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

void traver(Node *tail)
{
    if (tail == NULL)
    {
        cout << "empty LL!";
        return;
    }
    Node *temp = tail->next;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
    cout << "\n";
}

int main()
{
    Node *tail = new Node(1);
    tail->next = tail;
    return 0;
}