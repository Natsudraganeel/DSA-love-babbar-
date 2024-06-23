#include <bits/stdc++.h> 
using namespace std;
void insert(stack<int>& myStack,int x){
    if(myStack.empty()){   //base case
        myStack.push(x);
        return;
    
    } 
        int num = myStack.top();
        myStack.pop();
        insert(myStack, x);
        myStack.push(num);
    

}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    insert(myStack,x);
    return myStack;

   

}
