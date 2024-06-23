#include<iostream>
using namespace std;
int sum(int *arr,int n){      //qs--- add all the integers of array using recursion
                                
    int bum;
   
    if(n==0){                 //base case
        return 0;
    }
     if(n==1){               // 1ta case
        return arr[0];
    }
    
    
   
     else                     //rr        //array te ek ek kore bardbo ar size komte thakbe
    {    
        
         return arr[0]+sum(arr+1,n-1);
    }
    


}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<sum(arr,5);


return 0;
}