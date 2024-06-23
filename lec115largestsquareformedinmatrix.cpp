#include <bits/stdc++.h> 
using namespace std;

// int solve(vector<vector<int>>mat,int i,int j,int &maxi){  // recursion
//     if(i>=mat.size() || j>=mat[0].size()){
//         return 0;
//     }
//     int right=solve(mat,i,j+1,maxi);
//     int down=solve(mat,i+1,j,maxi);
//     int dia=solve(mat,i+1,j+1,maxi);
//     if(mat[i][j]==1){
//     int ans=1+min(right,min(down,dia));
//     maxi=max(ans,maxi);
//     return ans;
//     }
//     else{
//         return 0;
//     }
// }
//     int maxSquare(int n, int m, vector<vector<int>> mat){
//         // code here
//         int maxi=0;
//         solve(mat,0,0,maxi);
//         return maxi;
//     }
int solve(vector<vector<int>>&mat,int i,int j,int &maxi,vector<vector<int>>&dp){
    if(i>=mat.size() || j>=mat[0].size()){
        return 0;
    }
    if(dp[i][j]!=-1){                  //rec and memo
        return dp[i][j];
    }
    int right=solve(mat,i,j+1,maxi,dp);
    int down=solve(mat,i+1,j,maxi,dp);
    int dia=solve(mat,i+1,j+1,maxi,dp);
    if(mat[i][j]==1){
    dp[i][j]=1+min(right,min(down,dia));
    maxi=max(dp[i][j],maxi);
    return dp[i][j];
    }
    else{
        dp[i][j]=0;
        return dp[i][j];
    }
}
    int maxSquare(int n, int m, vector<vector<int>> mat){
        // code here
        vector<vector<int>>dp(n,vector<int>(m,-1));
        int maxi=0;
        solve(mat,0,0,maxi,dp);
        return maxi;
    }