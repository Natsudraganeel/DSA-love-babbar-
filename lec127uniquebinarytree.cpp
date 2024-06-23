#include <bits/stdc++.h>
using namespace std;
/*class Solution {
public:
int solve(int n){
    if(n<=1){
        return 1;
    }                    // onlu rec
    int ans=0;
    for(int i=1;i<=n;i++){
     ans=ans+(solve(i-1)*solve(n-i));

    }
    return ans;
}
    int numTrees(int n) {
     return solve(n);
    }
};*/
class Solution {
public:
int solve(int n,vector<int>&dp){
    if(n<=1){
        return 1;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int ans=0;
    for(int i=1;i<=n;i++){
     ans=ans+(solve(i-1,dp)*solve(n-i,dp));

    }
    dp[n]=ans;
    return ans;
}
    int numTrees(int n) {
        vector<int>dp(n+1,-1);
     return solve(n,dp);
    }
};