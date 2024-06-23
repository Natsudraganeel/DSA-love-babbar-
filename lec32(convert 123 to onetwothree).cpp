#include<iostream>
using namespace std;

void update(int m){
    int n=0,l;
    int arr[100];
    int r,sum=0;
    int i=0;
      while (m!=0)
    {
       l=m%10;
       m=m/10;
       n=n*10+l;
        
    }

    while (n!=0)
    {
        r=n%10;
        arr[i]=r;
        sum=sum+1;
        n=n/10;
        i++;
        
    }
    for (int i = 0; i < sum; i++)
    {
        if(arr[i]==0){
            cout<<"zero";
        }
        if(arr[i]==1){
            cout<<"one";
        }
        if(arr[i]==2){
            cout<<"two";
        }
        if(arr[i]==3){
            cout<<"three";
        }
        if(arr[i]==4){
            cout<<"four";
        }
        if(arr[i]==5){
            cout<<"five";
        }
        if(arr[i]==6){
            cout<<"six";
        }
        if(arr[i]==7){
            cout<<"seven";
        }
        if(arr[i]==8){
            cout<<"eight";
        }
        if(arr[i]==9){
            cout<<"nine";
        }
    }
    
    

     
}
int main(){
    int n;
    cin>>n;
    update(n);

return 0;
}