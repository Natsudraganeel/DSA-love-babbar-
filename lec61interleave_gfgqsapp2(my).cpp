#include <bits/stdc++.h> 
using namespace std;
class Solution{        //my approach where u need not create both stack and vector
public:
    vector<int> rearrangeQueue(queue<int> &q){
        
    vector<int>v;
    int i=0;
    int k=q.size()/2;
    while(i!=k){
        int val=q.front();
        q.pop();
        v.push_back(val);
        i++;
    }
    
    while(!v.empty()){
        int val=v.back();
        v.pop_back();
        q.push(val);
        
    }
    i=0;
     
     while(i!=k){
         int val=q.front();
         q.pop();
         q.push(val);
         i++;
     }
     i=0;
     while(i!=k){
         int val=q.front();
         q.pop();
         v.push_back(val);
         i++;
     }
     while(!v.empty()){
         int val=v.back();
         v.pop_back();
         q.push(val);
         int cal=q.front();
         q.pop();
         q.push(cal);
     }
     while(!q.empty()){
         int val=q.front();
         q.pop();
         v.push_back(val);
     }
     
    return v;
    }
};