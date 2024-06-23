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
    pair<bool,int>isfast(Node* root){
        if(root==NULL){
            pair<bool,int>p;
            p.first=true;
            p.second=0;
            return p;
        }
        if(root->left==NULL && root->right==NULL){
           pair<bool,int> g;
           g.first=true;
           g.second=root->data;
           return g;
        }
        pair<bool,int> left=isfast(root->left);
        pair<bool,int> right=isfast(root->right);
        bool op1=left.first;
        bool op2=right.first;
        pair<bool,int> j;
        if(op1==true && op2==true && root->data==left.second+right.second){
            j.second=left.second+right.second+root->data;
            j.first=true;
            
        }
        else{
            j.first= false;
        }
        
        return j;
        
    }
    bool isSumTree(Node* root)
    {
         return isfast(root).first;
    }
};