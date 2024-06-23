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
class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node* root){               /*sol with t.c.=o(n^2)*/
        if(root==NULL){
            return 0;
        }
        int left=height(root->left);
        int right=height(root->right);
        int g=max(left,right)+1;
        return g;
        
    }
    bool isBalanced(Node *root)
    {
        if(root==NULL){
            return true;
        }
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        int g=abs(height(root->left)-height(root->right));
        if(left==true && right==true && g<=1){
            return true;
        }
        else{
            return false;
        }
        
    }
};
/*optimized sol with o(n) t.c.*/
class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    pair<bool,int>diameterfast(Node* root){
        if(root==NULL){
            pair<bool,int>p;
            p.first=true;
            p.second=0;
            return p;
        }
        pair<bool,int> left=diameterfast(root->left);
        pair<bool,int> right=diameterfast(root->right);
        int g=abs(left.second-right.second);
        pair<bool,int>k;
                k.second=max(left.second,right.second)+1;

        if(left.first==true && right.first==true && g<=1){
            k.first=true;
        }
        else{
            k.first=false;
        }
        return k;
        
    }
    bool isBalanced(Node *root)
    {
     
       
        return diameterfast(root).first;
    }
};
