#include<iostream>
#include<queue>
using namespace std;
int main(){
   queue<int>q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   cout<<q.front()<<endl;
   q.pop();
   q.pop();
   q.pop();
   q.pop();
   cout<<q.front()<<endl;
   if(q.empty()==true){
       cout<<"empty hai";
   }
   else{
    cout<<"not";
   }




}