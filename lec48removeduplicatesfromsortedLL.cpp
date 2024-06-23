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

Node * removeDuplicates(Node *head)
{   
    Node* curr=head;
    while(curr!=NULL){
    if(curr->next!=NULL && curr->data==curr->next->data){
        Node* joke=curr->next;
        curr->next=curr->next->next;
        joke=NULL;
        delete joke;
           
    } 
       else{
           curr=curr->next;
       }
    }
    return head;
}