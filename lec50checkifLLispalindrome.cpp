
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
  
    //Function to check whether the list is palindrome.
   
    bool isPalindrome(Node *head)
    {
        int arr[10000];
         int i=0,size=0;
        Node*temp=head;
        while(temp!=NULL){        //geeksforgeeks
            arr[i]=temp->data;
            temp=temp->next;
              size++;
              i++;
            
        }
        for(int i=0;i<size;i++){
            if(arr[i]!=arr[size-i-1]){
                return false;
            }
        }
        return true;   
        
    }
    
