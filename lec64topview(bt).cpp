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
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        map<int,int> topnode;
        queue<pair<Node*,int>>q;
        q.push(make_pair(root,0));
        while(!q.empty()){
            pair<Node*,int> frontnode=q.front();
            q.pop();
            Node* temp = frontnode.first;
            int hd=frontnode.second;
            if(topnode.find(hd)==topnode.end()){
                topnode[hd]=temp->data;
            }
            if(temp->left!=NULL){
                q.push(make_pair(temp->left,hd-1));
            }
            if(temp->right!=NULL){
                 q.push(make_pair(temp->right,hd+1));
                
            }
           
        }
         for(auto i:topnode){
                ans.push_back(i.second);
            }
        return ans;
        
    }

};