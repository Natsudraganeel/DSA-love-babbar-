#include <bits/stdc++.h> 
using namespace std;

void del(stack<int> &inputStack,int count,int size){
    //base case
    if(count==size/2){
       inputStack.pop();
       return ;
    }
    int num=inputStack.top();
    inputStack.pop();
    del(inputStack,count+1,size);
    inputStack.push(num);

}
void deleteMiddle(stack<int>&inputStack, int N){
	int count=0;
   del(inputStack,count,N);

   
}