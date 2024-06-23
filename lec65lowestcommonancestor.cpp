 
 #include<iostream>
#include<vector>
#include<queue>
#include<map>

using namespace std;
class Node {
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};


class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
    Node* lca(Node* root ,int n1 ,int n2 )
    {
       if(root==NULL){
           return NULL;
       }
       if(root->data==n1 || root->data==n2){
           return root;
       }
       
      Node* leftans= lca (root->left,n1,n2);
       Node* rightans=lca(root->right,n1,n2);
        if(leftans!=NULL && rightans !=NULL){
           return root ;
       }
       else if(leftans!=NULL && rightans==NULL){
           return leftans;
       }
       else if(rightans!=NULL && leftans==NULL){
           return rightans;
       }
       
       else{
           return NULL;
       }
       
       
    }
};