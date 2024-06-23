#include<iostream>
using namespace std;
int fibb(int n)              //leetcode
    {
         int a=0;
    int b=1;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    
        int ans=fibb(n-1)+fibb(n-2);
        return ans;
    }
        


int main(){
    int n;
    cin>>n;
    cout<<fibb(n);
    return 0;
}