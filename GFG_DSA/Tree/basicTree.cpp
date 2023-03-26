#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
        Node(int d)
        {
            this->data = d;
            this->left =NULL;
            this->right =NULL;
        }
};

int main(){
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->left->right=new Node(40);
    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    cout<<root->left->right->data<<endl;
    return 0;
}