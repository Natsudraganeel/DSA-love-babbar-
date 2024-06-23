#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;    //declaring next and data
    Node(int data){
        this->data=data;                    //defining data and next
        this->next=NULL;      
    }
};
bool isCircular(Node* head){
    Node* temp=head->next;
    while(temp!=head && temp!=NULL){
        temp=temp->next;
         if(temp==head){
            return true;
     }
        
    }
    
     
}