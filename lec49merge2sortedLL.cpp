 #include <bits/stdc++.h>
 
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

 Node<int>*solve(Node<int>* first, Node<int>* second){
    
    
     Node<int>* prev1=first;
     Node<int>* curr1=prev1->next;
     Node<int>* prev2=second;
     Node<int>* curr2=prev2->next;      //this curr2 is  required as the second LL might get lost when prev1->prev2->curr1 takes place 
     while(curr1!=NULL && prev2!=NULL){
         if((prev1->data<=prev2->data)&&(prev2->data<=curr1->data)){
             prev1->next=prev2;
             curr2=prev2->next;   
             prev2->next=curr1;
             prev1=prev2;
             prev2=curr2;
             
         }
         else{
             prev1=curr1;
             curr1=curr1->next;
             if(curr1==NULL){
                 prev1->next=prev2;
                 return first;
             }
             

             }
         }
          return first;
     }


Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
 
   
    if(first==NULL){
        return second;
    }
    if(second==NULL){
        return first;
    }
     
    
      if(second->next==NULL && second->data<=first->data){          // in case first is 5 the ll consists of one element
                                                                          //second is 1   the ll consists of one element
          second->next=first;
          return second;        
    }
     if(first->next==NULL && second->data>=first->data){          // in case first is 1  the ll consists of one element
                                                                          //second is 5   the ll consists of one element
          first->next=second;
          return first;        
    }
  


    if(first->data<=second->data){
         return solve(first,second);
    } 
    else {
         return solve(second, first);
    }
}