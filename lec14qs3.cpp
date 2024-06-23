//sqrt of a number using binary search.ans will be integer(i.e decimal part gayeb)

#include<iostream>
using namespace std;
int binsearch(int n){
    int ans=-1;
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if ((mid*mid)==n)
        {
            
            
        return mid;    
           
        }
        else if(mid*mid>n){
                 e=mid-1;
               ans=mid;

        }
        else
        {
          s=mid+1;
        }
        mid=s+(e-s)/2;
        
    }
return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<binsearch(n);
    

 
}