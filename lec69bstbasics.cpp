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
Node* insertnode(Node* root,int d){
    if(root==NULL){
        root=new Node(d);
        return root;
    }
    if(d > root->data){
        root->right=insertnode(root->right,d);
    }
    else{
        root->left=insertnode(root->left,d);
    }
    return root;
}
void takeinput(Node* &root){
    int data;
    
   cin>>data;
   while(data != -1){
     
      root=insertnode(root,data);
       
       cin>>data;

   }

}
void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data<<" ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}

void postorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}
void inorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}
Node* mindata(Node* root){
    if(root==NULL){
        return NULL;
    }
    Node* temp=root;
    if(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}
Node* maxdata(Node* root){
    if(root==NULL){
        return NULL;
    }
    Node* temp=root;
    if(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}
Node* deletefrombst(Node* root,int val){
    if(root==NULL){
        return root;
    }
    if(root->data==val){
    if(root->left==NULL && root->right==NULL){
        delete root;
        return NULL;
    }
    if(root->left==NULL && root->right!=NULL){
        Node* temp=root->right;
        delete root;
        return temp;

    }
    if(root->right==NULL && root->left!=NULL){
        Node* temp=root->left;
        delete root;
        return temp;
    }
    if(root->right!=NULL && root->left!=NULL){
         int min=mindata(root->right)->data;
         root->data=min;
         root->right=deletefrombst(root->right,val);
         return root;

    }
    }
}
int main(){
    Node* root=NULL;
    takeinput(root);
    levelOrderTraversal(root);
    inorder(root);
    preorder(root);
   
    postorder(root);
    cout<<"min is"<<mindata(root)->data<<endl;
    cout<<"max is"<<maxdata(root)->data<<endl;

}