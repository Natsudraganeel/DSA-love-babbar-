  #include<iostream>
#include<vector>
#include<queue>
#include<map>

using namespace std;
 template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };
/*void inorder(TreeNode<int>* root,vector<TreeNode<int>*> &v){
    if(root==NULL){
        return ;
    }
    inorder(root->left,v);
    v.push_back(root);
    inorder(root->right,v);
}
TreeNode<int>* flatten(TreeNode<int>* root)
{
   vector<TreeNode<int>*>v;                             // we can do it this way as well but codestudio ni66e na
   inorder(root,v);
   int i=0;
   while(i<v.size()-1){
       v[i]->left==NULL;
       v[i]->right=v[i+1];
       i++;
   }
   v[i]->right=NULL;
   v[i]->left=NULL;

   return root;
}
*/
void inorder(TreeNode<int>* root,vector<int> &v){
    if(root==NULL){
        return ;
    }
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
TreeNode<int>* flatten(TreeNode<int>* root)
{
   vector<int>v; 
   inorder(root,v);
   int i=0;
   TreeNode<int>* head=new TreeNode<int>(v[i]);
   TreeNode<int>* curr=head;
   i=1;
   while(i<v.size()){
      TreeNode<int>* temp=new TreeNode<int>(v[i]); 
      curr->left=NULL;
      curr->right=temp;
      curr=temp;
      i++;
       
   }
   curr->right=NULL;
   curr->left=NULL;

   return head;
}