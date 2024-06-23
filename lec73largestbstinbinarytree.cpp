
  #include<iostream>
  #include<climits>
using namespace std;

    class TreeNode {
        public :
        int data;
        TreeNode *left;
        TreeNode* right;

        TreeNode(int data) {
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
    };class info{
    public:
    int maxi;
    int mini;
    bool isbst;
    int size;
    
                              //as yahan 4 cheezei return hongi so pair se kaam nahin hoga
};

info solve(TreeNode* root,int &ans){
 if(root==NULL){
     return {INT_MIN,INT_MAX,true,0};   //the order of data types should be inthe same as class info i.e. maxi,mini,isbst,size
 }
 // why maxi is INT_MIN and mini is INT_MAXI? ans= *
  
    info left=solve(root->left,ans);
    info right=solve(root->right,ans);
    info currnode;
    currnode.size=left.size+right.size+1;
    currnode.maxi=max(root->data,right.maxi);   //* max of(root->data and INT_MIN)=root->data for root=leaf node  
    currnode.mini=min(root->data,left.mini);    //  min of(root->data and INT_MAX)=root->data for root=leaf node  
    if(left.isbst && right.isbst && (root->data>left.maxi && root->data <right.mini) ){        
        currnode.isbst=true;
        
    }
    else{
        currnode.isbst=false;
    }
    if(currnode.isbst){
        ans=max(ans,currnode.size);
    }


    
    return currnode;
}
int largestBST(TreeNode * root){
    int maxsize=0;
    info temp=solve(root,maxsize);
    return maxsize;


}