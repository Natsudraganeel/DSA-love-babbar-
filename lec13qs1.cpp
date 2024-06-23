#include<iostream>
using namespace std;
int firstoccurence(int arr[],int key,int size){
   int ans=-1;
   int start=0;
   int end=size-1;
   int mid=start+(end-start)/2;
   while(start<=end){
   if (key==arr[mid])
   {
      ans=mid;
      end=mid-1;
   }
   else if (key>arr[mid])
   {
      start=mid+1;
   }
   else
   {
      end=mid-1;
   }
   mid=start+(end-start)/2;
   }
   return ans;
}
int lastoccurence(int arr[],int key,int size){
  
   int start=0;
   int end=size-1;
   int mid=start+(end-start)/2;
    int ans=-1;
   while(start<=end){
   if (key==arr[mid])
   {
      ans=mid;
      start=mid+1;
   }
   else if (key>arr[mid])
   {
      start=mid+1;
   }
   else
   {
      end=mid-1;
   }
   mid=start+(end-start)/2;
   }
   return ans;
}

int main(){
   int n,key;
   int x;
   cin>>x;
   for (int y = 0;y<x;y++)
   {
               cin>>n;
   cin>>key;
    int arr[n];
   for ( int i = 0; i <n; i++)
   {
      cin>>arr[i];
   }
         cout<<firstoccurence(arr,key,n)<<" ";
      cout<<lastoccurence(arr,key,n)<<endl;

      
   }
   
   return 0;
}