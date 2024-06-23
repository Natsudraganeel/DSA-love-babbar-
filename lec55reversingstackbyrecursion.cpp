#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &stack,int x){
    if(stack.empty()){
        stack.push(x);
        return ;
    }
    int num=stack.top();
    stack.pop();
    insertatbottom(stack,x);
    stack.push(num);
}
void rev(stack<int> &stack){
    if(stack.size()==1){
         return;                     //base case
        
    }
    int num=stack.top();
    stack.pop();
    rev(stack);
    insertatbottom(stack,num);

}

void reverseStack(stack<int> &stack) {
    rev(stack);
    
    
}