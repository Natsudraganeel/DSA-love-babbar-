#include <bits/stdc++.h> 
using namespace std;    //sirer approach where u nedd to create both vector and stack
class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){        
        
        stack<int>b;
        int i=0;
        int k=q.size()/2;
        while(i!=k){
            int val=q.front();
            q.pop();
            b.push(val);
            i++;
        }
        while(!b.empty()){
            int val=b.top();
            b.pop();
            q.push(val);
        }
        int j=0;
        while(j!=k){
            int val=q.front();
            q.pop();
            q.push(val);
            j++;
        }
        int x=0;
        while(x!=k){
            int val=q.front();
            q.pop();
            b.push(val);
            x++;
        }
        vector<int>v;
        while(!b.empty()){
            int val=b.top();
            b.pop();
            v.push_back(val);
            int cal=q.front();
            q.pop();
            v.push_back(cal);
            
        }
        return v;
        
    
        
    }
};