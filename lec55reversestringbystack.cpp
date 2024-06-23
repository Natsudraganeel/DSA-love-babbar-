#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int> s;
string str;
cin>>str;


for (int i = 0; i<str.length(); i++)
{
    s.push(str[i]);
}
string ans="";
while(!s.empty()){
    
    char ch=s.top();
    ans.push_back(ch);
    s.pop();


}
cout<<ans;
return 0;
}
