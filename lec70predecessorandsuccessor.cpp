#include<iostream>
#include<queue>
using namespace std;
/*************************************************************

    Following is the Binary Tree node structure*/
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };


pair<int, int> predecessorSuccessor(TreeNode *root, int key)
{
    int pred= -1;
    int succ= -1;
    TreeNode* temp=root;
    while(temp!=NULL && temp->data != key){         // reaching key
        if(temp->data>key){
             succ=temp->data;
            temp=temp->left;
        }
        else{
            pred=temp->data;
            temp=temp->right;
        }
        
    }
    if(temp!=NULL){
    TreeNode* lefttree=temp->left;      //after reaching key find max in the left and min in the right
    while(lefttree != NULL){
        pred=lefttree->data;
        lefttree=lefttree->right;
        
    }
    TreeNode* righttree=temp->right;
    while (righttree != NULL) {
        succ = righttree->data;
        righttree = righttree->left;
    }
}
    pair<int,int>ans= make_pair(pred,succ);
    return ans;
}