#include<iostream>
using namespace std;
void arr(char a,char b){
    char temp=a;
    a=b;
    b=temp;
}
int main(){
    char a='j';
    char b='k';
    cout<<a<<b;
    swap(a,b);
        cout<<a<<b;


return 0;
}