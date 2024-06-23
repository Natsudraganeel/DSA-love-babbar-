 
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

class Solution{
    public:
    int position(int in[],int inorderstart,int inorderend,int element,int n){
        for(int i=inorderstart;i<=inorderend;i++){
            if(in[i]==element){
                return i;
            }
            
        }
        return -1;
    }
    Node* solve(int in[],int pre[],int &index,int inorderstart,int inorderend,int n){
        if(index>=n || inorderstart>inorderend){
            return NULL;
        }
        int element=pre[index];
        index++;
       
        Node* root=new Node(element);
        int pos=position(in,inorderstart,inorderend,element,n);
        root->left=solve(in,pre,index,inorderstart,pos-1,n);
        root->right=solve(in,pre,index,pos+1,inorderend,n);
        
        return root;
    
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        int preorderindex=0;
        Node* temp=solve(in,pre,preorderindex,0,n-1,n);
        return temp;
    }
};