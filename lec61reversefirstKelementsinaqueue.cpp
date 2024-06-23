#include <bits/stdc++.h> 
using namespace std;
queue<int> modifyQueue(queue<int> q, int k) {
    int n=q.size();
    stack<int>s;
    queue<int>l;
    for(int i=0;i<k;i++){
        int element=q.front();
        q.pop();
        s.push(element);
    }
    for(int i=0;i<k;i++){
        int element=s.top();
        s.pop();
        q.push(element);
        
    }
    for(int i=0;i<n-k;i++){
        int element=q.front();
        q.pop();
        l.push(element);
    }
    for(int i=0;i<n-k;i++){
        int element=l.front();
        l.pop();
        q.push(element);
        
    }
    return q;
    
}