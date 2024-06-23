 #include <bits/stdc++.h> 
using namespace std;
  bool check(vector<int>ek,vector<int>base){
    if(ek[0]>=base[0] && ek[1]>=base[1] && ek[2]>=base[2]){
        return true;
    }
    else{
        return false;
    }

  }                                             //leetcode takes it.just like the lec119 qs
    int solve(int n,vector<vector<int>>& a) {
      vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        for(int curr=n-1;curr>=0;curr--){
            for(int prev=curr-1;prev>=-1;prev--){
                int take=0;
        if( prev==-1 || check(a[curr],a[prev])){
            take= a[curr][2]+dp[curr+1][curr+1];
        }
        int nottake=0+dp[curr+1][prev+1];
        dp[curr][prev+1]= max(take,nottake);
            }
        }
        return dp[0][0];   
    }
     int maxHeight(vector<vector<int>>& a) {
      /*for(int i=0;i<a[0].size();i++){
          sort(a[i].begin(),a[i].end());
      } */
      for(auto &j:a){
          sort(j.begin(),j.end());
      }
      sort(a.begin(),a.end());
     return solve(a.size(),a);
     
     }
