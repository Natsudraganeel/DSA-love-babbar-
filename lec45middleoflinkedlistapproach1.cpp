#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};



int getlength(Node*head){
    int  len=0;
    while(head!=NULL){
        head=head->next;
         len++;
    }
    return len;

}

Node *findMiddle(Node *head) {
     int g=getlength(head)/2;
     Node* ans=head;
     int cnt=0;
     while(cnt<g){
         head=head->next;
         cnt++;
     }
     return head;

    
}