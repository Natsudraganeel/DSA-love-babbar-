#include<iostream>
using namespace std;
//qs1        to check if the array is sorted
bool sorted(int *arr,int n){      //arr[] is pointer type
   if(n==0 || n==1){     //base case
     return true;
   }
   if (arr[0]>arr[1]) 
   {
      return 0;
   }
                                              //array te ek ek kore bardbo (size komte thakbe naturally)
   bool ans= sorted( arr+1,n-1);     // tai arr i.e arr+1 use korchi
   return ans;
   
  
   
}
int main(){
    int arr[5]={1,5,9,70};
    cout<<sorted(arr,5);

return 0;
}