
#include <bits/stdc++.h> 
using namespace std;
 template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };
class compare {
    public:
bool operator()(Node<int>* a, Node<int>* b){
    return a->data > b->data;
}
};
Node<int>* mergeKLists(vector<Node<int>*> &listArray)
{
    priority_queue<Node<int>*,vector<Node<int>*>,compare> minheap;
    int k=listArray.size();
    if(k==0){
        return NULL;
    }
    for(int i=0;i<k;i++){
      if (listArray[i] != NULL) {
        minheap.push(listArray[i]);
      }
    }
    Node<int>* head=NULL;
    Node<int>* tail=NULL;
    while(minheap.size()!=0){
        Node<int>* top=minheap.top();
        minheap.pop();
        if(head==NULL){
            // when answer ll is empty
            head=top;
            tail=top;
            if(tail->next!=NULL){
                minheap.push(tail->next);
            }
        }
        else{
            tail->next=top;
            tail=top;
            if(tail->next!=NULL){
                minheap.push(tail->next);
            }
        }

    }
    return head;

}