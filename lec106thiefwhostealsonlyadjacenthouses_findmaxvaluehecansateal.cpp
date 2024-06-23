   #include<iostream>
#include<unordered_map>
#include<vector>
#include<list>
using namespace std;
	int solve(int arr[] ,int n){
	    vector<int>dp(n,-1);
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
	    /*vector<int>first;
    vector<int>second;                 
    for(int i=0;i<valueInHouse.size()-1;i++){
    first.push_back(valueInHouse[i]);
    }
    for(int i=1;i<valueInHouse.size();i++){
        second.push_back(valueInHouse[i]);
    }
        long long int ans=max(solve(first),solve(second));*/// if erokom bole je first and last house is adjacent then we see 0ton-2 and 1ton-1 .eder modhye jeta max,setai ans
	    
	    int k=solve(arr,n);
	    return k;
	    
	}