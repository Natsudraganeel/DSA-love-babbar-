#include <bits/stdc++.h> 
using namespace std;
class node{
    public:
int data;
int i;
int j;
 node(int a,int b,int c){
     data=a;
     i=b;
     j=c;
 }
};
class compare {
    public:
bool operator()(node* a, node* b){
    return a->data > b->data;
}
}; 
vector<int> mergeKSortedArrays(vector<vector<int>> &kArrays, int k) {
priority_queue<node*, vector<node*>, compare> minheap;
 //step1: saare arrays ka 1st element insert karo 
       for(int i=0;i<k;i++){
           node* temp=new node(kArrays[i][0],i,0);
           minheap.push(temp);
       }
       vector<int>ans;
       //step 2
       while(minheap.size()!=0){
            node* temp=minheap.top();
            ans.push_back(temp->data);
            minheap.pop();
            
            int i=temp->i;
            int j=temp->j;
            if(j+1< kArrays[i].size()){
                node* next=new node(kArrays[i][j+1],i,j+1);
                minheap.push(next);
            }

       }
       return ans;
      
}
