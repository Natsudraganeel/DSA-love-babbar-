   #include<iostream>
#include<unordered_map>
#include<vector>
#include<list>
using namespace std;
   int ans(vector<int>&cost,vector<int>&dp,int n){   // recursion and memeorization
          if(n==0){
              return cost[n];
          } 
          if(n==1){
              return cost[n];
          }
          if(dp[n]!=-1){
              return dp[n];
          }

          dp[n]=min(ans(cost,dp,n-1),ans(cost,dp,n-2))+cost[n];
          return dp[n];

    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);// initializing size of vector and setting all the elemets to -1;
        int solve=min(ans(cost,dp,n-1),ans(cost,dp,n-2));
        return solve;
    }
    /*int minCostClimbingStairs(vector<int>& cost) {   // tabulation method
        int n=cost.size();            
        vector<int>dp(n+1,-1);
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<n;i++){
            dp[i]=min(dp[i-1],dp[i-2])+cost[i];
        }
        return min(dp[n-1],dp[n-2]);
    }*/


    /*    int minCostClimbingStairs(vector<int>& cost) { // this is taulation method for o(1) s.c.
        int n=cost.size();
        int prev1=cost[0];
        int prev2=cost[1];
        int curr;
        for(int i=2;i<n;i++){
            curr=min(prev1,prev2)+cost[i];
            prev1=prev2;
            prev2=curr;
        }
        return min(prev1,prev2);
    }*/