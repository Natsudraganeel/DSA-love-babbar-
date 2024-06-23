  #include<iostream>
#include<vector>


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
    };
void inorder(TreeNode* root,vector<int> &v){
    if(root==NULL){
        return;
    }
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);

}
vector<int> merge2sortedarrays(vector<int> &v1,vector<int> &v2){
    int i=0;
    int j=0;
    int k=0;
    vector<int> v3;
    while(i < v1.size() && j < v2.size()){
        if (v1[i]<v2[j]) {
         v3.push_back(v1[i]);
         i++;
        }
        else{
            v3.push_back(v2[j]);
            j++;
        }
    }
    while(i<v1.size()){
         v3.push_back(v1[i]);
         i++;
    }
    while(j<v2.size()){
         v3.push_back(v2[j]);
         j++;
    }
    return v3;
}
TreeNode* inordertobst(vector<int> &v,int s,int e){
    if(s>e){                                 //time compelxity=o(size of v1 +size of v2)
        return NULL ;
    }
    int mid=(s+e)/2;
    
    TreeNode* root=new TreeNode(v[mid]);
    root->left=inordertobst(v,s,mid-1);
    root->right=inordertobst(v,mid+1,e);
    return root;


}
TreeNode* mergeBST(TreeNode *root1, TreeNode *root2)
{
    vector<int> bst1,bst2;
    inorder(root1,bst1);
    inorder(root2,bst2);
    vector<int> v3=merge2sortedarrays(bst1,bst2);
    return inordertobst(v3,0,v3.size()-1);
   

}
/*void converttosorteddoublell(TreeNode* root,TreeNode* &head){
    if(root==NULL ){
        return ;
    }
   converttosorteddoublell(root->right,head);
    root->right=head;                           //more optimized approiach
    if(head!=NULL){
        head->left=root;
    }
    head=root;
    converttosorteddoublell(root->left,head);

}
TreeNode* merge2doublell(TreeNode* head1,TreeNode* head2){
    TreeNode* head=NULL;
    TreeNode* tail=NULL;
    while(head1 !=NULL && head2 !=NULL){
        if(head1->data<head2->data){
            if(head==NULL){
                head=head1;
                tail=head1;
                head1=head1->right;
            }
            else{
                tail->right=head1;
                head1->left=tail;
                tail=head1;
                head1=head1->right; 

            }

        }
        else{
            if(head=NULL){
                 head=head2;
                head2=head2->right;
            }
            else{
                tail->right=head1;
                head1->left=tail;
                tail=head1;
                head1=head1->right;
                
            }

        }
    }
    while(head1!=NULL){
         tail->right=head1;
                head1->left=tail;
                tail=head1;
                head1=head1->right; 
    }
    while(head2!=NULL){
                tail->right=head1;
                head1->left=tail;
                tail=head1;
                head1=head1->right;
    }
    return head;

}
int count(TreeNode* head){
   
        int cnt=0;
        TreeNode* temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
}
TreeNode* sortedlltobst(TreeNode* head,int n){
    if(n<=0 || root==NULL){
        return NULL;
    }
    TreeNode* left=sortedlltobst(head,n/2);
    TreeNode* root=head;
    
    root->left=left;
    head=head->next;
    root->right=sortedlltobst(head,n-n/2-1);
    return root;




}  //n=sizeofll
TreeNode* mergeBST(TreeNode *root1, TreeNode *root2)
{       TreeNode* head1=NULL;
       converttosorteddoublell(root1,head1);
       TreeNode* head2=NULL;
       converttosorteddoublell(root2,head2);
       TreeNode* go=merge2doublell(head1,head2);
       return sortedlltobst(go,count(go))
        

}*/