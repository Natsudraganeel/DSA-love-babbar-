#include<iostream>
using namespace std;
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
       
       Node(int data){
         this->data=data;
         this->next=NULL;
          this->prev=NULL;
       }
};
class Solution{
public:
    
    
    int getNthFromLast(Node *head, int n)
    {
          
         int cnt=0;
        Node* emp=head;
        while(emp!=NULL){
            emp=emp->next;
            cnt++;
        }
        
      Node* temp=head;
        int t=1;
        if(cnt<n){
            return -1;
        }else{
        while(t<=cnt-n){
            temp=temp->next;
            t++;
        }
        return temp->data;
        }
    }
};