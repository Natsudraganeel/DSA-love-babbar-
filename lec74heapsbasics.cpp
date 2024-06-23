#include<iostream>
#include<queue>
using namespace std;
class heap{
 public:
 int arr[100];
 int size;
 heap(){
    size=0;
    arr[0]= -1;
 }
 void push(int data){
     size=size+1;
     int index=size;
     arr[index]=data;
     while(index > 1){
        int parent=index/2;
          if(arr[index]>arr[parent] ){
            swap(arr[index],arr[parent]);
            index=parent;

          }
          else{
            return ;

          }
     }
     
     
 }
 void print(){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
 }
 void pop(){
    if(size==0){
      cout<<"not possible"<<endl;
    }
   arr[1]=arr[size];
   size--;
   int i=1;
   while(i<size){
       int leftindex=2*i;
       int rightindex=2*i+1;
       if(leftindex<=size && arr[i]<arr[leftindex] && arr[leftindex]>arr[rightindex]){
          swap(arr[i],arr[leftindex]);
          i=leftindex;
       }
       else if(rightindex<=size && arr[i]<arr[rightindex] && arr[rightindex]>arr[leftindex]){
          swap(arr[i],arr[rightindex]);
          i=rightindex;
       }
       else{
        return ;
       }


   }


 }

};
 void heapify(int arr[],int n,int i){
   int largest=i;
   int left=2*i;                  // done in 1 based indexing
   int right=2*i+1;
   if( left<=n     &&  arr[largest]<arr[left]  ){
      largest=left;
   }
    if( right<= n     &&  arr[largest]<arr[right]  ){
      largest=right;
   }
  

   if(largest !=i){
      swap(arr[largest],arr[i]);
      heapify(arr,n,largest);
   }
 }
 void heapsort(int arr[],int n){
    int size=n;
    while(size>1){
      swap(arr[size],arr[1]);
      size--;
      heapify(arr,size,1);
    }
 }
int main(){
    heap obj;
    obj.push(54);
    obj.push(53);
    obj.push(52);
    obj.push(55);
    obj.push(51);
    obj.pop();
    obj.print();
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    //heap cretion
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    for(int i=1;i<=n;i++){
          cout<<arr[i]<<" ";
    }
    cout<<endl;
    // heapsort
    heapsort(arr,5);
    for(int i=1;i<=n;i++){
          cout<<arr[i]<<" ";
    }
    cout<<endl;
    //max heap
  /* priority_queue<int> pq;
   pq.push(4);
   pq.push(1);
   pq.push(12);
   pq.push(3);
   cout<<pq.top()<<endl;
   pq.pop();
   cout<<pq.top()<<endl;
   cout<<pq.empty()<<endl;*/
   // min heap
   priority_queue<int,vector<int>,greater<int>> pq;
   pq.push(4);
   pq.push(1);
   pq.push(12);
   pq.push(3);
   cout<<pq.top()<<endl;
   pq.pop();
   cout<<pq.top()<<endl;
   cout<<pq.empty()<<endl;
    return 0;
}
