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
    //Function to return list containing elements of right view of binary tree.
    void func(Node* root,int level,vector<int> &ans){
       if(root==NULL){
           return ;
       }
       if(level==ans.size()){
           ans.push_back(root->data);
           
       }
       func(root->right,level+1,ans);
       func(root->left,level+1,ans);
       
       
       
   }
     
    vector<int> rightView(Node *root)
    {
        int level=0;
        vector<int>ans;
        func(root,level,ans)  ;
        return ans;
       
    }
};