 
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

class Solution{
  public:
   void solve(Node* root,int &count,int k,vector<int>path){
       if(root==NULL){
           return ;
       }
       path.push_back(root->data);
       solve(root->left,count,k,path);
       solve(root->right,count,k,path);
       int sum=0;
       int size=path.size();
       for(int i=size-1;i>=0;i--){
           sum=sum+path[i];
           if(sum==k){
               count++;
           }
          
       }
        path.pop_back();
        
   }
    int sumK(Node *root,int k)
    {
        vector<int>path;
        int count=0;
        solve(root,count,k,path);
        return count;
    }
};