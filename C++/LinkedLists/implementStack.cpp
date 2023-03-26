/****************************************************************

    Following is the class structure of the Node class:
*****************************************************************/

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

class Stack
{
    // Write your code here
    Node *top;

public:
    Stack()
    {
        // Write your code here
        Node *top = NULL;
    }

    int getSize()
    {
        int count = 0;
        // Write your code here
        if (top == NULL)
        {
            return 0;
        }

        Node *temp = top;
        while (temp->next != NULL)
        {
            temp = temp->next;
            count=count+1;
            cout << "here"<<" ";
        }

        return count;
    }

    bool isEmpty()
    {
        // Write your code here
        if (top == NULL)
            return true;
        else
            return false;
    }

    void push(int data)
    {
        // Write your code here
        if (top == NULL)
        {
            Node *temp = new Node(data);
            top = temp;
        }

        Node *temp = new Node(data);
        temp->next = top;
        top = temp;
    }

    void pop()
    {
        // Write your code here
        if (top == NULL)
            return;
        top = top->next;
    }

    int getTop()
    {
        // Write your code here
        if (top == NULL)
            return -1;
        return top->data;
    }
};
int main()
{
    Stack s1;
    s1.push(12);
    s1.push(12);
    s1.push(12);
    s1.push(12);
    s1.push(12);
    s1.push(13);
    int size = s1.getSize();
    cout << size << endl;
    cout<<s1.isEmpty();
    return 0;
}