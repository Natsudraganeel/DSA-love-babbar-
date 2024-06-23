#include<iostream>
using namespace std;

class A
{
private:
    /* data */
    int a;
public:
    A(int x=0){
        a=x;
    }
     operator int(){
        return a;
     }
 
   /*A operator()(int x){
     A t;
     t.a=x;
     return t;
   }*/
    int geta(){
        return a;
    }
    int operator()(A ob){
        return ob.a;
    }
};
int main(){
A ob1(2),ob3(7),ob2;
ob2=ob3(ob1+8);
cout<<ob2.geta();
return 0;
}
   