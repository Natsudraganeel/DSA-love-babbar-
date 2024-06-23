#include <bits/stdc++.h> 
using namespace std;
class Queue {
           int size;
           int* arr;
           int qfront ;
            int rear;
public:
    Queue() {
         size=100001;
        arr=new int[size];
         qfront=0;       //we should not use front here as front() and front gets mixe by the compiler
         rear=0;
     
       
              
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(rear==qfront){
            return 1;
        }
        else{
            return 0;
        }
        
    }

    void enqueue(int data) {
        if(rear>size-1){
            cout<<"it is full";
        }
        else{
    
            arr[rear]=data;
            rear++;

        }

    }

    int dequeue() {
        if(rear==qfront){
            return -1;
        }
        else{
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(rear==qfront){
                rear=0;
                qfront=0;
            }
            return ans;
        }
    
    }

    int front() {
        if(rear==qfront){
            return -1;
        }
        else {
            return arr[qfront];
        }
    }
};