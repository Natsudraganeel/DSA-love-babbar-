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

int solve(Node* root, int k,int &i){
     
    //base case
    if(root == NULL) {
        return -1;
    }
    

    int left=solve(root->left,k,i);
    if(left!=-1){
        return left;
    }
    i++;
    if(i==k){
        return root->data;
    }
    int right=solve(root->right,k,i);
     if(right!=-1){
        return right;
    }
    
    
}

int kthSmallest(Node* root, int k) {
    int i=0;
    
    int ans=solve( root, k, i);
    return ans;
    }