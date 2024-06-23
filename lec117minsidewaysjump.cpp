 #include <bits/stdc++.h> 
using namespace std;
// class Solution {                // rec
// public:
// int solve(vector<int>ob,int currpos,int currlane,int n){
//     if(currpos==n){
//         return 0;
//     }
//     if(ob[currpos+1]!=currlane){
//         return solve(ob,currpos+1,currlane,n);
//     }
//     else{
//         int ans=INT_MAX;
//         for(int i=1;i<=3;i++){
//             if(currlane!=i && ob[currpos]!=i)
//             ans=min(ans,1+solve(ob,currpos,i,n));

//         }
//         return ans;

//     }
// }
//     int minSideJumps(vector<int>& obstacles) {
//         int n=obstacles.size()-1;
//         return solve( obstacles,0,2,n);
//     }
// };
class Solution {
public:
int solve(vector<int>&ob,int currpos,int currlane,vector<vector<int>>&dp){
    if(currpos==ob.size()-1){
        return 0;
    }
    if(dp[currlane][currpos]!=-1){
        return dp[currlane][currpos];            //rec and memo
    }
    if(ob[currpos+1]!=currlane){
        return solve(ob,currpos+1,currlane,dp);
    }
    else{
        int ans=ob.size()-1;
        for(int i=1;i<=3;i++){
            if(currlane!=i && ob[currpos]!=i)
            ans=min(ans,1+solve(ob,currpos,i,dp));

        }
        dp[currlane][currpos]=ans;
        return ans;

    }
}
    int minSideJumps(vector<int>& obstacles) {
        int n=obstacles.size()-1;
        vector<vector<int>>dp(4,vector<int>(n+1,-1));
        return solve( obstacles,0,2,dp);
    }
};