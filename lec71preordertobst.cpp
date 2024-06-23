  #include<iostream>
#include<vector>
#include<climits> //used for INT_MIN and INT_MAX

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
BinaryTreeNode<int>* solve(vector<int> &v,int mini,int maxi,int &i){
    if(i>=v.size()){
        return NULL;
    }
    if(v[i]>maxi || v[i]<mini){                                          
        return NULL;
    }
    BinaryTreeNode<int>* root=new BinaryTreeNode<int>(v[i]);
    i++;
    
    root->left=solve(v,mini,v[i-1],i);   //instead of v[i-1],we could write root->data
    root->right=solve(v,v[i-1],maxi,i);
    return root ;

}
BinaryTreeNode<int>* preorderToBST(vector<int> &preorder) {
    int i=0;
    return solve(preorder,INT_MIN,INT_MAX,i);
}