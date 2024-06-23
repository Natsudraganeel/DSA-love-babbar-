#include<iostream>
using namespace std;
int getpivot(int arr[], int n) {

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<e) {

        if(arr[mid] >= arr[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}
int binsearch(int arr[],int s,int e,int k){
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    while (start<=end)
    {
        if (arr[mid]==k)
        {
            return mid;
        }
        
        else if (arr[mid]>k)
        {
            start=mid+1;
        }
        else{
           end=mid-1;
        }
 mid=start+(end-start)/2;

    }
    return -1;
 
    
}
int search(int arr[],int n,int k){
    int pivot=getpivot(arr,5);

if (k<=n-1 && arr[pivot]<=k)
{
    return binsearch(arr,pivot,n-1,2);
}
else
{
    return binsearch(arr,0,pivot-1,2);
}

}
int main(){
    int go[5]={7,9,1,2,3};
    cout<<search(go,5,2);


return 0;
}