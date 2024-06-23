#include<iostream>
#include<queue>
using namespace std;
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        priority_queue<long long,vector<long long>,greater<long long>> pq;
        for(long long i=0;i<n;i++){
            pq.push(arr[i]);
            
        }
        long long cost=0;
        while(n>1){
            long long a=pq.top();
            pq.pop();
            long long b=pq.top();
            pq.pop();
            long long c=a+b;
            cost=cost+c;
            pq.push(c);
            n--;
        }
        return cost;
    }
};