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
   void insertathead(Node* &head,int d){
        Node* temp=new Node(d);     //creating a new node
        temp->next=head;
        head=temp;

     }
     void print(Node* &head ){
        Node* temp=head;            // creating temp  which is a pointer pointing to head
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            
            temp=temp->next;
        }

     }
     void insertattail(Node* &tail,int d){
        Node* temp=new Node(d);
        tail->next=temp;
        tail=temp;
     }
     void insertatnthposition(Node* &tail,Node* &head,int d,int position){
        if(position==1){
            insertathead(head,d);
            return;
        }
       
        
              Node*temp=head;       
             
              int cnt=1;
              while (cnt<position-1)
              {
                temp=temp->next;
                cnt++;
              }
                  if(temp->next==NULL){
                    insertattail(tail,d);
                    return;
              }
              Node* node=new Node(d);
              node->next=temp->next;
              temp->next=node;
            
     }
     void deletenode(Node* &head,int position){
        if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;        //free memory of temp

        }
        else{
            Node* curr=head;    //initial positions of curr and prev
            Node* prev=NULL;
            int cnt=1;
            while(cnt<position){
                prev=curr;
                curr=curr->next;
               
                cnt++;
            }
             prev->next=curr->next;
                curr->next=NULL;
                delete curr;        //free memory of curr
        }
     }
      
int main(){
    Node* node1=new Node(10);     //creating a node
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    Node* head=node1;
    Node* tail=node1;
    insertathead(head,12);
      insertathead(head,15);
      insertattail(tail,20);
    
    insertatnthposition(tail,head,22,4);
    
        print(head);
        cout<<endl;
        deletenode(head,1);
         print(head);
    

    return 0;
}





