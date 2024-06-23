//{ Driver Code Starts
//Initial template for C++
// note-hard level qs
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
int solve(int index,int diff,int a[],unordered_map<int,int>dp[]){
    if(index<0){
        return 0;
    }                                          // tle di66e even in memo+rec
    if(dp[index].count(diff)){
        return dp[index][diff];
    }
    int ans=0;
    for(int j=index-1;j>=0;j--){
        if(a[index]-a[j]==diff){
            ans=max(ans,1+solve(j,diff,a,dp));
        }
    }
    dp[index][diff]=ans;
    return ans;
}
    int lengthOfLongestAP(int A[], int n) {
        // code here
        if(n<=2){
            return n;
        }
        unordered_map<int,int>dp[n+1];
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ans=max(ans,2+solve(i,A[j]-A[i],A,dp));
            }
        }
        return ans;
    }
};
/*   int lengthOfLongestAP(int A[], int n) {
        // code here   // tabulation still tle
        if(n<=2){
            return n;
        }
        int ans=0;
        unordered_map<int,int>dp[n+1];
        for(int i=1;i<n;i++ ){
            for(int j=0;j<i;j++){
                int cnt=1;
                int diff=A[i]-A[j];
                if(dp[j].count(diff)){
                   
                    cnt=dp[j][diff];
                }
                dp[i][diff]=1+cnt;
                 ans=max(ans,1+cnt);
            }
        }
        return ans;
    }*/
//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        Solution ob;
        auto ans = ob.lengthOfLongestAP(A, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends