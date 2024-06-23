#include<iostream>
#include<queue>
using namespace std;
class Solution{
    public:
    void heapify(vector<int> &arr,int n,int i){
   int largest=i;
   int left=2*i+1;                  // done in 0 based indexing
   int right=2*i+2;
   if( left<n     &&  arr[largest]<arr[left]  ){
      largest=left;
   }
    if( right< n     &&  arr[largest]<arr[right]  ){
      largest=right;
   }
  
                                            //t.c.=o(logn),s.c.=o(m+n)
   if(largest !=i){
      swap(arr[largest],arr[i]);
      heapify(arr,n,largest);
   }
 }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        vector<int> v;
        
        for(int i=0;i<n;i++){
            v.push_back(a[i]);
        }
        for(int i=0;i<m;i++){
            v.push_back(b[i]);
        }
        int size=v.size();
         for(int i=size/2 -1;i>=0;i--){
        heapify(v,size,i);
    }
      return v;
        
    }
};