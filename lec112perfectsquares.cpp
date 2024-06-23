	#include <bits/stdc++.h> 
    using namespace std;
    int ans(int n,vector<int>&dp){
	    if(n==0){
	        return 0;
	    }
	    if(dp[n]!=-1){
	        return dp[n];
	    }
	    int k=n;
	    for(int i=1;i*i<=n;i++){
	        k=min(k,1+ans(n-i*i,dp));
	    }
	    dp[n]=k;
	    return dp[n];
	}
	int MinSquares(int n)
	{
	    vector<int>dp(n+1,-1);
	    int job=ans(n,dp);
	    return job;
	}