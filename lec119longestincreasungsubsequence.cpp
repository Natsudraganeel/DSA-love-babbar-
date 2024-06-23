  #include <bits/stdc++.h> 
using namespace std;
 int solve(int n,int a[],int curr,int prev,vector<vector<int>>&dp){
        if(curr==n){    // gfg wont take it but it is fine
            return 0;
        }
        if( dp[curr][prev+1]!=-1){
            return  dp[curr][prev+1];   //prev+1 ei karone korlam as prev -1 o hote pare
        }
        int take=0;
        if( prev==-1 || a[curr]>a[prev]){
            take= 1+solve(n,a,curr+1,curr,dp);
        }
        int nottake=0+solve(n,a,curr+1,prev,dp);
        dp[curr][prev+1]= max(take,nottake);
        return  dp[curr][prev+1];
    }
      int solvetab(int a[],int n){  // gfg wont take it but it is fine
        
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int curr=n-1;curr>=0;curr--){
            for(int prev=curr-1;prev>=-1;prev--){
                int take=0;
        if( prev==-1 || a[curr]>a[prev]){      
            take= 1+dp[curr+1][curr+1];     //prev er jaigatate +1 ei karone korlam as prev -1 o hote pare
        }
        int nottake=0+dp[curr+1][prev+1];
        dp[curr][prev+1]= max(take,nottake);
            }
        }
        return dp[0][-1+1];   
        
    }
    int koli(int n,int a[]){    // gfg takes this as t.c.=o(nlog(n));
        if(n==0){
            return 0;
        }
        vector<int>ans;
        ans.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(a[i]>ans.back()){
                ans.push_back(a[i]);
            }
            else{
                int index=lower_bound(ans.begin(),ans.end(),a[i])-ans.begin(); //lower_bound search it on google
                ans[index]=a[i];
            }
        }
        return ans.size();
    }
    int longestSubsequence(int n, int a[])
    {
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solve(n,a,0,-1,dp);
    }