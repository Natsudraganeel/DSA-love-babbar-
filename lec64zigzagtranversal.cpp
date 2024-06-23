#include<iostream>
#include<vector>
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

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
        int index;
    	vector<int> result;
    	if(root == NULL)
    	    return result;
    	
    	queue<Node*> q;
    	q.push(root);
    	
    	bool leftToRight = true;
    	
    	while(!q.empty()) {
    	    
    	    int size = q.size();
    	    vector<int> ans(size);
    	    
    	    //Level Process
    	    for(int i=0; i<size; i++) {
    	        
    	        Node* frontNode = q.front();
    	        q.pop();
    	        
    	        //normal insert or reverse insert 
    	        if(leftToRight==true){
    	            index=i;
    	        }
    	        else{
    	            index=size-i-1;
    	        }
    	        ans[index] = frontNode -> data;
    	        
    	        if(frontNode->left!=NULL)
    	            q.push(frontNode -> left);
    	            
    	        if(frontNode->right!=NULL)
    	            q.push(frontNode -> right);
    	    }
    	    
    	    //direction change karni h
    	    if(leftToRight==true){
    	        leftToRight=false;
    	    }
    	    else{
    	        leftToRight=true;
    	    }
    	   
    	  for(int i=0;i<size;i++) {
    	      result.push_back(ans[i]);
    	  }  
    	}
    	    return result;
    }
};
/*
void spiraltraversal(Node* root){    // a soln made by me
queue<Node*>q;
vector<Node*>v;
q.push(root);
q.push(NULL);
while(!q.empty()){
Node* temp=q.front();
q.pop();
if(temp==NULL){
    v.push_back(NULL);
if(!q.empty()){
    q.push(NULL);
        
}
}
else{
v.push_back(temp);
if(temp->left!=NULL){
    q.push(temp->left);
}
if(temp->right!=NULL){
    q.push(temp->right);
}
}
}
int i=0;
int x=0;
while(i<v.size()){
    int j=0;
    int t=0;
    if(v[i]!=NULL && x%2==0){
        cout<<v[i]->data<<" ";
        
    }
    if(v[i]!=NULL && x%2!=0){
           j=i;
          
           
           while(v[j]!=NULL){
           
            j++;
      
           }
           t=j;//NULL
          
           j--;
           while(v[j]!=NULL){
               cout<<v[j]->data<<" ";
                   
               j--;
           }
           i=t-1;


    }
    if(v[i]==NULL){
        
        cout<<endl;
        x++;
    }

    i++;
}

}*/