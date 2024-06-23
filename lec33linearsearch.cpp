#include<iostream>
using namespace std;
int rec(int arr[],int m,int n){        //linear search using recursion
    if(m==0){ //base case
        return 0;
    }
    if(*arr==n){     //1 ta case
        return 1;
    }
    else{
        return rec(arr+1,m-1,n);  //rr     //array te ek ek kore bardbo ar size komte thakbe
    }

}
int main(){
    int arr[5]={5,7,8,9,10};
    int target=6;
    cout<<rec(arr,5,target);

return 0;
}