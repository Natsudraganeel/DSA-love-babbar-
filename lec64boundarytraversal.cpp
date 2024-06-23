#include<iostream>
#include<vector>

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
    void traverseleft(Node* root,vector<int> &ans){
        if(root==NULL || (root->left==NULL && root->right==NULL)){
            return ;
        }
        ans.push_back(root->data);
        if(root->left!=NULL){
            traverseleft(root->left,ans);
        }
        else{
            traverseleft(root->right,ans);
        }
        
    }
    void leafnodes(Node* root,vector<int> &ans){
        if(root==NULL){
            return ;
        }
        leafnodes(root->left,ans);
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        leafnodes(root->right,ans);
    }
    void traverseright(Node* root,vector<int> &ans){
        if(root==NULL || (root->left==NULL && root->right==NULL)){
            return ;
        }
        if(root->right!=NULL){
            traverseright(root->right,ans);
            
        }
        else{
            traverseright(root->left,ans);
        }
        ans.push_back(root->data);
        
    }
    
    vector <int> boundary(Node *root)
    {
              vector<int>ans;
        if(root==NULL){
            return ans;
        }
  
        ans.push_back(root->data);
        traverseleft(root->left,ans);
        leafnodes(root->left,ans);  //root ke left ke leafnodes
        leafnodes(root->right,ans); // root ke right ke leafnodes
        traverseright(root->right,ans);
        return ans;
        
        
    }
};