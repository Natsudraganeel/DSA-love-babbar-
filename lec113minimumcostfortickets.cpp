	#include <bits/stdc++.h> 
    using namespace std;
int ans(int n,vector<int>days,vector<int>cost,int index){
    if(index>=n){
          return 0;
    }
                                       // by rec only
    // for 1 day
    int option1=cost[0]+ans(n,days,cost,index+1);
    // for 1 week
     int   option2=0;
     int i;
     for(i=index;i<n && days[i]<days[index]+7;i++);
         option2=cost[1]+ans(n,days,cost,i);
     
       // for 1 month
   int option3=0;
     for(i=index;i<n && days[i]<days[index]+30;i++);
         option3=cost[2]+ans(n,days,cost,i);
     
     return min(option1,min(option2,option3));
}
//////////////////////////////////////////////////////////////////

int ans(int n,vector<int>days,vector<int>cost,int index,vector<int>&dp){
    if(index>=n){
          return 0;
    }                         // rec and memorization

    // for 1 day
    int option1=cost[0]+ans(n,days,cost,index+1,dp);
    // for 1 week
     int   option2=0;
     if(dp[index]!=-1){
         return dp[index];
     }
     int i;
     for(i=index;i<n && days[i]<days[index]+7;i++);
         option2=cost[1]+ans(n,days,cost,i,dp);
     
       // for 1 month
   int option3=0;
     for(i=index;i<n && days[i]<days[index]+30;i++);
         option3=cost[2]+ans(n,days,cost,i,dp);

         dp[index]=min(option1,min(option2,option3));
     
     return min(option1,min(option2,option3));
}
int minimumCoins(int n, vector<int> days, vector<int> cost)
{
    vector<int>dp(n+1,-1);
 int k=ans(n,days,cost,0,dp);
 return k;            

}