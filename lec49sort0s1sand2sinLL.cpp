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

Node* sortList(Node *head){
   int count=0;
   int cont=0;
   int con=0;
   Node* temp=head;
   while(temp!=NULL){
       if(temp->data==0){
           count++;
       }
       if (temp->data==1){
           cont++;
       }
       if (temp->data==2){
           con++;
       }
       temp=temp->next;
   }
   int i=0,j=0,k=0;
   temp=head;
   while(temp!=NULL){
   while(i<count){
       temp->data=0;
       temp=temp->next;
       i++;
   }
   while(j<cont){
       temp->data=1;
    temp=temp->next;
       j++;

   }
   while (k < con) {
       temp->data = 2;
       temp =temp->next;
       k++;
   }
   }
   return head;
}