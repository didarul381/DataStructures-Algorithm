#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left,*right;

    Node(int data)
    {
        this->data=data;
        left=right=NULL;
    }


};

void preorder(Node *node)
{
    if(node==NULL) return;
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}
void inorder(Node *node)
{
    if(node==NULL) return;
    inorder(node->left);
     cout<<node->data<<" ";
    inorder(node->right);
}
void postorder(Node *node)
{
    if(node==NULL) return;
    postorder(node->left);
    postorder(node->right);
     cout<<node->data<<" ";


}
int main()
{
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    cout<<"\n preorder Traversal:";
     preorder(root);
     cout<<"\n preorder Traversal:";
    inorder(root);
     cout<<"\n preorder Traversal:";
     postorder(root);

}
