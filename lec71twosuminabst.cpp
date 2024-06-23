  #include<iostream>
#include<vector>
#include<queue>
#include<map>

using namespace std;
 template <typename T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
void inorder(BinaryTreeNode<int>* root,vector<int> &arr){
    if(root==NULL){
        return;
    }
    inorder(root->left,arr);
    arr.push_back(root->data);
    inorder(root->right,arr);
}
bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	vector<int>ans;
    inorder(root,ans);
    int i=0;
    
    int j=ans.size()-1;
    for(int k=0;k<ans.size()-1;k++){
     if(target> ans[i]+ans[j]){
         i++;
     }
     else if(target< ans[i]+ans[j]){
         j--;
     }
     else{
         return true;
     }
}
return false;

}