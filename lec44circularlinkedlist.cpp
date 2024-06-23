#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void insertnode(Node* &tail,int element,int d ){    //element=jei value r pore amra insert krbo node
 
    if(tail==NULL){
           Node* nodetoinsert=new Node(d);
        tail=nodetoinsert;
        nodetoinsert->next=nodetoinsert;
    }
    else{
        Node* curr=tail;
        while (curr->data!=element)
        {
            curr=curr->next;
        }// curr is now pointing the position which contains element
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
void print(Node* tail){
    Node* temp=tail;
    if(tail==NULL){
        cout<<"empty"<<endl;
        return;                 // empty list
    }
   
   do{
    cout<<tail->data<<" ";
    tail=tail->next;
   }while (tail!=temp);
  cout<<endl;

}
void deletenode(Node* &tail, int value) {

    //empty list
    if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
    }
    else{
        //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }



        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }
         while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }
                prev -> next = curr -> next;

        curr -> next = NULL;
        delete curr;

    }

}

int main(){
  
    Node* tail=NULL;   //initializing tail
       
    insertnode(tail,10,40);   //ekhane elementer jaegae anything bosate pari
    print(tail);
    
     insertnode(tail,40,50);
         print(tail);
      insertnode(tail,40,80);
    print(tail);
      insertnode(tail,50,20);
          print(tail);
       deletenode(tail,40);
           print(tail);
   
    return 0;
}
