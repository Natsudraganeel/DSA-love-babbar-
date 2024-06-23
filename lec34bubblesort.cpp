#include<iostream>
using namespace std;
void sorted(int arr[],int n){        //arr[] is pointer type
    if(n==0 ){    //base case
        return ;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){
            swap(arr[i],arr[i+1]);

        }  
    }
    cout<<arr[n-1]<<endl;
    return sorted(arr,n-1); // tai arr i.e arr+0 use korchi


}

int main(){
    int arr[5]={2,9,90,45,23};
    sorted(arr,5);
   


}