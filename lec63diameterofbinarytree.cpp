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
class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int height(Node* node){
        if(node==NULL){                                             //but here t.c.is o(n^2)
            return 0;
        }
        int left=height(node->left);
        int right=height(node->right);
        int x=max(left,right)+1;
        return x;
        
                           
    }
    int diameter(Node* root) {
            if(root==NULL){
                return 0;
            }
            int op1=diameter(root->left);
            int op2=diameter(root->right);
            int op3=height(root->left)+1+height(root->right);
            int g=max(op1,max(op2,op3));
            return g;
    }
};
/*optimized solution with t.c. =o(n)*/
class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    pair<int,int>diameterfast(Node* root){         /*pair<int,int> stores 2 integers =diameter and height
                                                          first contains dia and second contains height*/
        if(root==NULL){
            pair<int,int>p;
            p.first=0;
            p.second=0;
            return p;
        }
        pair<int,int> left=diameterfast(root->left);
        pair<int,int> right=diameterfast(root->right);
        int op1=left.first;
        int op2=right.first;
        int op3=left.second+1+right.second;
        pair<int,int>g;
         g.first=max(op1,max(op2,op3));
         g.second=max(left.second,right.second)+1;
        return g;             /*eksath both dia and height from left(as well as right is going) */
        
        
    }
    int diameter(Node* root) {
            pair<int,int> g=diameterfast(root);
            return g.first;
    }
};