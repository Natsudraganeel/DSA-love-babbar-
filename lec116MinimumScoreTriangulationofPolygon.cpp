#include <bits/stdc++.h> 
using namespace std;

int solve(vector<int>&v,int i,int j){
    if(i+1==j){
        return 0;
    }
    int ans=INT_MAX;
    for(int k=i+1;k<j;k++){
           ans=min(ans,v[i]*v[j]*v[k]+solve(v,i,k)+solve(v,k,j));
    }
    return ans;

}
    int minScoreTriangulation(vector<int>& values) {
        int n=values.size();
        return solve(values,0,n-1);
    }