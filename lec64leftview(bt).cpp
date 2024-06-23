 
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
void func(Node* root,int level,vector<int> &ans){
       if(root==NULL){
           return ;
       }
       if(level==ans.size()){
           ans.push_back(root->data);
           
       }
       func(root->left,level+1,ans); //age left call hbe for tarpor right for left view and vice versa for right view
       func(root->right,level+1,ans);
       
       
   }
vector<int> leftView(Node *root)
{     int level=0;
        vector<int>ans;
        func(root,level,ans)  ;
        return ans;
}