#include<iostream>

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
    //Function to check if two trees are identical.
    bool isIdentical(Node *r1, Node *r2)
    {
        if(r1==NULL && r2==NULL){
            return true;
        }
        if(r1!=NULL && r2==NULL){
            return false;
        }
        if(r2!=NULL && r1==NULL){
            return false;
        }
        bool left=isIdentical(r1->left,r2->left);
        bool right=isIdentical(r1->right,r2->right);
        if(r1->data==r2->data && left==true && right==true){
            return true;
        }
        else{
            return false;
        }
        
        
        
        
    }
};