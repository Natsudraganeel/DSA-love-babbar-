#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
  int pivot=arr[s];
  int count=0;
 for (int i = s+1; i <=e; i++)
 {
   if(arr[i]<=pivot){
     count++;
   }
 }
 int pivotindex=s+count;
 swap(arr[s],arr[pivotindex]);
 int i=s;
 int j=e;
 while (i<pivotindex && j>pivotindex)
 {
    if(arr[i]<=pivot){
      i++;
    }
    if (arr[j]>pivot)
    {
       j--;
    }
    if(arr[i]>=pivot && arr[j]<pivot){
       swap(arr[i],arr[j]);
       i++;
       j--;
    }
    
 }
 return pivotindex;
 

}
void quicksort(int arr[],int s,int e){
  if (s>=e){
    return ;

  }
  int p=partition(arr,s,e);
  quicksort(arr,s,p-1);

  quicksort(arr,p+1,e);

}
int main(){
  int arr[8]={3,1,4,5,2,9,9,9};
  quicksort(arr,0,7);
  for (int i = 0; i < 8; i++)
  {
    cout<<arr[i]<<endl;
  }
  
  
  
   cout<<"hello";
   



return 0;
}