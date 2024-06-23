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
void reverse(Node* &head,Node* prev,Node* curr){
    //base case
    if(curr==NULL){
        head=prev;
        return;
    }
    else{
        Node* forward=curr->next;
        curr->next=prev;
        reverse(head,curr,forward);
    }


}
Node *reverseLinkedList(Node *head) {
     Node * prev=NULL;
    Node * curr=head;
    reverse(head,curr,prev);
    return head;


}

