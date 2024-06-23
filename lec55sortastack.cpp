#include <bits/stdc++.h>
using namespace std; 
void sortedinsert(stack<int> &stack,int num){
	if( stack.empty() || ( stack.top()<num) ) {  //base case   if we write if(stack.top()<num || stack.empty()) it will not work 
          stack.push(num);
		  return ;
	}
	int n=stack.top();
	stack.pop();
	sortedinsert(stack,num);
	stack.push(n);


}
void sortStack(stack<int> &stack)
{
	if(stack.empty()){  //base case
		return;
	}
	int num=stack.top();
	stack.pop();
	sortStack(stack);
	sortedinsert(stack,num);
}