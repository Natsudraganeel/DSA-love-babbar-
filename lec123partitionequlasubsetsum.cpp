  #include<iostream>
#include<unordered_map>
#include<vector>
#include<list>
using namespace std;

class Solution{
public:
bool solve(int index,int n,int arr[],int target,vector<vector<int>>&dp){
    if(target<0){
        return 0;
    }
    if(target==0){
        return 1;
    }
    if(index>=n){
        return 0;
    }
   if(dp[index][target]!=-1){
       return dp[index][target];
   }
    
    bool incl=solve(index+1,n,arr,target-arr[index],dp);
    bool exl=0+solve(index+1,n,arr,target,dp);
    dp[index][target]=incl || exl;
    return dp[index][target];
}
    int equalPartition(int n, int arr[])
    {
    
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
           
        if(sum%2!=0){
            return 0;
        }
        else{
             vector<vector<int>>dp(n+1,vector<int>((sum/2)+1,-1));
            return solve(0,n,arr,sum/2,dp);
        }
    }
};