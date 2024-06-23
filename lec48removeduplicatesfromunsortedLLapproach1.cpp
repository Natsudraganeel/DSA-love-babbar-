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

Node *removeDuplicates(Node *head)
{                                           //code is good but time limit exceeding
    Node* curr=head;
    while(curr!=NULL){
        
        Node*temp=curr->next;
        while(temp!=NULL){
            if(temp->next!=NULL && temp->next->data==curr->data){
                Node* forward=temp->next;
                temp->next=temp->next->next;
                forward=NULL;
                delete forward;
            } 
            else {
                temp = temp->next;
            }
        }

    }
}