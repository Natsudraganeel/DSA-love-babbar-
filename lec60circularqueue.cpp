#include <bits/stdc++.h> 
class CircularQueue{
    int *arr;
    int size;
    int front;
    int rear;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
           size=n;
           arr=new int[n];
           front=-1;
           rear=-1;
        
    }
    bool enqueue(int value){
        if((front==0 && rear==size-1)||((rear==(front-1)%(size-1)))){
            return false;

        }
        else if(front==-1){
            front =0;
            rear=0;
            
        }
        else if(rear==size-1 && front!=0){
                 rear=0;
        

        }
       else{
            rear++;
            
       }
       arr[rear]=value;
       return true;

        
    }
    int dequeue(){
      
        if(front==-1){    //empty
            return -1;
        }
        int ans=arr[front];
        
         if(front==rear){   //single element
            front=-1;
            rear=-1;   //for space saving
        }
        else if(front==size-1){
            front =0;
        } else {
            front++;
        }
           return ans;
      
    }
};