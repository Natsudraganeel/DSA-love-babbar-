
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



class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* reverse(struct Node* head){
        Node* curr=head;
        Node* prev=NULL;
        Node* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=next;
        }
        return prev;
        
    }
    void insertattail( struct Node* &head,struct Node* &tail,int data){
       
        Node* temp=new Node(data);
         if(head==NULL){
            head=temp;
            tail=temp;
            return;
        }
        else{
        tail->next=temp;
        tail=temp;
        }
        
        
    }
        struct Node* add(struct Node* first, struct Node* second){
            int carry=0;
            Node* anstail=NULL;
            Node* anshead=NULL;
            int sum,digit;
         
        while(first!=NULL && second!=NULL ){
             sum=first->data+second->data+carry;
             digit=sum%10;
            carry=sum/10;
            insertattail(anshead,anstail,digit);
            first=first->next;
            second=second->next;
        }
    
        while(first!=NULL){
            sum=carry+first->data;
            digit=sum%10;
            carry=sum/10;
            insertattail(anshead,anstail,digit);
            first=first->next;
        }
        while(second!=NULL){
            sum=carry+second->data;
            digit=sum%10;
            carry=sum/10;
            insertattail(anshead,anstail,digit);
            second=second->next;
        }
            while(carry!=0){
            sum=carry;
            
          
            insertattail(anshead,anstail,sum);
              carry=sum/10;
        }
        return anshead;
        
        
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        Node* head1=reverse(first);
        Node* head2=reverse(second);
        Node* ans=add(head1,head2);
        
        ans=reverse(ans);
        return ans;
    }
};
