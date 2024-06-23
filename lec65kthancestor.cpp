 
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

Node* solve(Node* root,int &k,int node){
    if(root==NULL){
        return NULL;
    }
    if(root->data==node){
        return root;
        
    }
    Node* leftans=solve(root->left,k,node);
    Node* rightans=solve(root->right,k,node);
    if(leftans!=NULL && rightans==NULL){
         k--;
         if(k<=0){
             k=10000;
             return root;
         }
        return leftans;
       
    }
    if(rightans!=NULL && leftans==NULL){
          k--;
         if(k<=0){
             k=10000;
             return root;
         }
        return rightans;

    }
    return NULL;
    
    
}
int kthAncestor(Node *root, int k, int node)
{
    
    Node* temp=solve(root,k,node);
    if(temp==NULL || temp->data==node){
        return -1;
    }
    else{
    return temp->data;
    }
}