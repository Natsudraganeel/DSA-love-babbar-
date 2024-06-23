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

Node* kReverse(Node* head, int k) {
    Node* temp=head;
    int size=0;
    while(temp!=NULL){
        temp=temp->next;
        size++;
    }
    if(size<k){
        return head;
    }
    
    
    if(head==NULL){
        return NULL;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=NULL;
    int count=0;
    while(count<k && curr!=NULL ){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }
    if (forward != NULL) {
        head->next = kReverse(forward,k);
    }

    return prev;
     
}