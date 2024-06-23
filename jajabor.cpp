#include<iostream>
using namespace std;
 bool isPalindrome(int x) {
      int sum=0,r;
       
       while(x!=0){
         r=x%10;
         x=x/10;
         sum=sum*10+r;
       }
       if(sum==x){
         return 1;
       }
       return 0;
    
    }
int main(){
int sum=0,r,x;
cin>>x;
int k=x;


        if(x<0){
          cout<<"not";
        }
       while(x!=0){
         r=x%10;
          sum=sum*10+r;
         x=x/10;
        
       }
       cout<<sum;
       if(sum==k){
         cout<<"yes";
       }
       else{
         cout<<"not";
       }

return 0;
}