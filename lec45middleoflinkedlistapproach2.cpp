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





Node *findMiddle(Node *head) {
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL){
        fast=fast->next;
        if (fast != NULL) { // fast ke 2 baar aage bariye deo holo
          fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}