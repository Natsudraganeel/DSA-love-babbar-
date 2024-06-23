 
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
    void joy(pair<int,int> k,Node* root,pair<int,int> &ans){
        if(root==NULL){
          
            return ;
        }
        k.first=k.first+root->data;
        k.second=k.second+1;
        if(root->left==NULL && root->right==NULL)
            if(k.second>ans.second ){
                ans.second=k.second;
                ans.first=k.first;
            }
            else if(k.second==ans.second){
                ans.first=max(k.first,ans.first);
            }
    
       
        joy(k,root->left,ans);
        joy(k,root->right,ans);
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        pair<int,int> p=make_pair(0,0);
        pair<int,int> ans=make_pair(0,0);
        joy(p,root,ans);
        return ans.first;
        
    }
};