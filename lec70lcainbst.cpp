 #include<iostream>
#include<vector>
#include<queue>
#include<map>

using namespace std;
class TreeNode {
    public:
        int data;
       TreeNode* left;
        TreeNode* right;

    TreeNode(int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

TreeNode *LCAinaBST(TreeNode *root, TreeNode *P, TreeNode *Q)
{
  if (root == NULL) {
    return NULL;
  }
 while(root!=NULL){                                           //iterative appraoch
      if(root->data<P->data && root->data<Q->data){
          root=root->right;
          }
           else if(root->data >P->data && root->data >Q->data){
               root=root->left;
               }
               else{
                   return root;
               }

  }
  /*if(root->data<P->data && root->data<Q->data){
      return LCAinaBST(root->right, P, Q);
  }                                                                   recursive approach
  else if(root->data >P->data && root->data >Q->data){
      return LCAinaBST(root->left, P, Q);
  }
  else{
      return root;
  }*/
}