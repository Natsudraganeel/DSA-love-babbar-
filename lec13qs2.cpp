//no. of occurences of a number in a sorted array;
#include<iostream>
using namespace std;
int firstoccurence(int arr[],int key,int size){
int start=0;
int end=size-1;
int mid=start+(end-start)/2;
int ans=-1;
while (start<=end)
{
    if (arr[mid]==key){
    
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
int lasttoccurence(int arr[],int key,int size){
int start=0;
int end=size-1;
int mid=start+(end-start)/2;
int ans=-1;
while (start<=end)
{
    if (arr[mid]==key){
    
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
    int n;
    int key;
    cin>>n;
    cin>>key;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    cout<<(lasttoccurence(arr,key,n)-firstoccurence(arr,key,n))+1;
    
}

