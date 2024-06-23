  #include<iostream>
#include<unordered_map>
#include<vector>
#include<list>
using namespace std;
   int solve(int wt[],int val[],int capacity,int i,vector<vector<int>>&dp){  
   if(i==0){
          if(wt[0]<=capacity){
              return val[0];
          }
          else{
              return 0;                  // we use a 2d dp here as two things are varying in rec i.e. i(index) and capacity
          }
      }
      if(dp[i][capacity]!=-1){
          return dp[i][capacity];
      }
      
      
      int inc=0;
        if(wt[i]<=capacity){  
          inc=val[i]+solve(wt,val,capacity-wt[i],i-1,dp);
        }
        int ex=0+solve(wt,val,capacity,i-1,dp);
            dp[i][capacity] =max(inc,ex);
        return  dp[i][capacity];
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>>dp(n,vector<int>(W+1,-1));
       int ans=solve(wt,val,W,n-1,dp);
       return ans;
       
    }