#include<iostream>                // binary search using recursion
using namespace std;
int binsearch(int arr[],int s,int e,int m){
    
    int mid=(s+e)/2;

    if(s>e){
        return 0;
    }
    if (arr[mid]==m)
    {
        return 1;
    }
    if(m>arr[mid]){
         return binsearch(arr,mid+1,e,m);

    }
    if(m<arr[mid]){
         return binsearch(arr,s,mid-1,m);

    }
    
   

}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    cout<<binsearch(arr,0,6,6);


return 0;
}