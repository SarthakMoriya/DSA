#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

int getMax(Node *root)
{
    queue<Node *> q;
    q.push(root);
    int val = -12344;

    while (!q.empty())
    {
        // int count = q.size();
        // for (int i = 0; i < count; i++)
        // {
        Node *curr = q.front();
        q.pop();
        if (val < curr->data)
            val = curr->data;
        if (curr->left)
            q.push(curr->left);

        if (curr->right)
            q.push(curr->right);
        // }
    }
    return val;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    // cout<<root->data<<endl;
    // cout<<root->left->data<<endl;
    // cout<<root->right->data<<endl;
    // cout<<root->left->right->data<<endl;
    cout<<getMax(root);
    return 0;
}