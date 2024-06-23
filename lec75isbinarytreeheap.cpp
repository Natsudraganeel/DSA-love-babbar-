#include<iostream>
#include<queue>
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
  int count(struct Node* root){
      if(root==NULL){
          return 0;
      }
      int left=count(root->left);
      int right=count(root->right);
      return left+right+1;
  }
  bool iscbt(struct Node* root,int i,int count){
      if(root==NULL){
          return true;
      }
      if(i>=count){
          return false;
      }
       bool left=iscbt(root->left,2*i+1,count);
       bool right=iscbt(root->right,2*i+2,count);
       return left && right;
      
  }
  bool maxorder(struct Node* root){
      if(root->left== NULL && root->right == NULL){
          return true;
      }
      else if(root->right==NULL){
          return root->data>root->left->data;
      }
      else{
          bool left=maxorder(root->left);         ;
          bool right= maxorder(root->right)       ;
          if(root->data > root->left->data && root->data >root->right->data && left==true && right==true){
            return true;  
          } 
          else{
              return false;
          }
      }
      
  }
    bool isHeap(struct Node* tree) {
        int index=0;
        int cnt=count(tree);
        if(iscbt(tree,index,cnt) && maxorder(tree)){
            return true;
        }
        else{
            return false;
        }
    }
};