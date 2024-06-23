 
 #include<iostream>

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
int position(int in[],int inorderstart,int inorderend,int element,int n){
        for(int i=inorderstart;i<=inorderend;i++){
            if(in[i]==element){
                return i;
            }
            
        }
        return -1;
    }
    Node* solve(int in[],int post[],int &index,int inorderstart,int inorderend,int n){
        if(index<0 || inorderstart>inorderend){
            return NULL;
        }
        int element=post[index];
        index--;
       
        Node* root=new Node(element);
        int pos=position(in,inorderstart,inorderend,element,n);
         root->right=solve(in,post,index,pos+1,inorderend,n);
        root->left=solve(in,post,index,inorderstart,pos-1,n);
       
        
        return root;
    
    }
Node *buildTree(int in[], int post[], int n) {
        int preorderindex=n-1;
        Node* temp=solve(in,post,preorderindex,0,n-1,n);
        return temp; 
}