#include<iostream>
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
void print(Node* &head){
    Node* temp=head;

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
    
    cout<<endl;

}
void insertattail(Node* &tail,int d){
    Node* temp=new Node(d);
     tail->next=temp;
     temp->prev=tail;
     tail=temp;
    

}
void insertathead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

}
void insertatposition(Node* &head,Node* &tail,int position,int d){
    Node* temp=head;
    if(position==1){
        insertathead(head,d);
        return;    
    }
  
  
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
       if(temp->next==NULL){
        insertattail(tail,d);
        return;    
    }
    Node* nodetoinsert= new Node(d);
    nodetoinsert->next=temp->next;
    temp->next->prev=nodetoinsert;
    temp->next=nodetoinsert;
    nodetoinsert->prev=temp;

}
void deleteatposition(Node* &head,int position){
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
       
        head=temp->next;
         temp->next=NULL;
        
        delete temp;
    }
    else{
    Node* curr=head;
    Node* back=NULL;
    int cnt=1;
    while (cnt<position)
    {
        back=curr;
        curr=curr->next;
        cnt++;
    }
    curr->prev=NULL;
    back->next=curr->next;
    curr->next=NULL;
    delete curr;

    }
}

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    insertathead(head,20);
    print(head);
    insertattail(tail,30);
       print(head);
    insertatposition(head,tail,4,50);
    print(head);
    deleteatposition(head,1);
       print(head);
return 0;
}