    #include <bits/stdc++.h> 
using namespace std;
//    int solve(int index,int endindex,vector<int>&slices,int n){
//          if(n==0 || index>endindex){
//              return 0;
//          }
//          int take=slices[index]+solve(index+2,endindex,slices,n-1);
//          int nottake=0+solve(index+1,endindex,slices,n);       // recursion
//          return max(take,nottake);

//     }
//     int maxSizeSlices(vector<int>& slices) {
//         int k=slices.size();
//         int case1=solve(0,k-2,slices,k/3);
//         int case2=solve(1,k-1,slices,k/3);
//         return max(case1,case2);
//     }
int solvemem(int index,int endindex,vector<int>&slices,int n,vector<vector<int>>&dp){
         if(n==0 || index>endindex){
             return 0;                                          // recursion and memorization
         }
         if(dp[index][n]!=-1){
             return dp[index][n];
         }
         int take=slices[index]+solvemem(index+2,endindex,slices,n-1,dp);
         int nottake=0+solvemem(index+1,endindex,slices,n,dp);
         dp[index][n]=max(take,nottake);
         return dp[index][n];

    }
    
    int maxSizeSlices(vector<int>& slices) {
        int k=slices.size();
        vector<vector<int>>dp1(k,vector<int>(k,-1));   // 2 dps are created as ek case1 ke liye ,ek case2 ke liye.Agar ek dp hota toh woh case1 ke time change ho jata andn case2 ke liye empty dp nahin milta 
         vector<vector<int>>dp2(k,vector<int>(k,-1));
        int case1=solvemem(0,k-2,slices,k/3,dp1);
        int case2=solvemem(1,k-1,slices,k/3,dp2);
        return max(case1,case2);
    }