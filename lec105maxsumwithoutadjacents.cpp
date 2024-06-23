	 #include<iostream>
#include<unordered_map>
#include<vector>
#include<list>
#include<limits>
using namespace std;
    /*int solve(int arr[],int i,vector<int>dp ){
	    if(i<0){
	        return 0;
	    }                       // rec and memo
	    if(i==0){
	        return arr[i];
	    }
	    if(dp[i]!=-1){
	        return dp[i];
	    }
	    int incl=solve(arr,i-2,dp)+arr[i];
	    int exl=solve(arr,i-1,dp)+0;
	    dp[i]=max(incl,exl);
	    
	    return dp[i];
	}*/
	int solve(int arr[] ,int n){
	    vector<int>dp(n,-1);    //tabulation way
	    dp[0]=arr[0];
	    for(int i=1;i<n;i++){
	        int include=dp[i-2]+arr[i];
	        int exclude=dp[i-1]+0;
	        dp[i]=max(include,exclude);
	        
	    }
	    return dp[n-1];
	    
	}
	int findMaxSum(int *arr, int n) {
	    // code here
	    
	    vector<int>dp(n+1,-1);
	    int k=solve(arr,n);
	    return k;
	    
	}