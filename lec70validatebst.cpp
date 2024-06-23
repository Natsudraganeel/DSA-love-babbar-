#include <bits/stdc++.h> 

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

bool solve(Node* root,int min,int max){
if(root==NULL){
    return true;
}
if(root->data>=min && root->data<=max){
    bool left=solve(root->left,min,root->data);
    bool right=solve(root->right,root->data,max);
    if(left==true && right==true){
        return true;
    }
    else{
        return false;
    }

}
else{
    return false;
}
}
bool validateBST(Node *root) {
    bool temp=solve(root,INT_MIN,INT_MAX);
    return temp;
}