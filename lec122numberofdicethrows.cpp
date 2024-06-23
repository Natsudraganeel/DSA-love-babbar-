        #include <bits/stdc++.h> 
using namespace std;
    long long solve(int faces,int dice,int target,vector<vector<long long>>&dp){
       if(target<0){
           return 0;
       }
        if(dice!=0 && target==0){
            return 0;
        }
        if(target!=0 && dice==0){
            return 0;
        }
        if(dice==0 && target==0){
            
            return 1;
        }
        if(dp[dice][target]!=-1){
            return dp[dice][target];
        }
        long long k=0;
        for(int i=1;i<=faces;i++){
            k=k+solve(faces,dice-1,target-i,dp);
        }
        dp[dice][target]=k;
        return dp[dice][target];
    }
    
    long long noOfWays(int faces , int dice , int target) {
        // code here
        long long ans=0;
        vector<vector<long long>>dp(dice+1,vector<long long>(target+1,-1));
        long long j= solve(faces,dice,target,dp);
        return j;
    }