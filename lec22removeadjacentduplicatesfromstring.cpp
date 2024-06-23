#include<iostream>
#include<string>
using namespace std;
  string removeDuplicates(string s) {
      for ( int i = 0; i < s.length(); i++)
      {
        if (s[i]==s[i+1])
        {
           s.erase(s.begin()+i,s.begin()+i+2);  //leetcode e 104/106 testcases chole baaki chole na.Bole memory limit exceeded
           return removeDuplicates(s);
        }
        
      }
      return s;
        
    }


int main(){
  string str;
  cin>>str;
  cout<<removeDuplicates(str);


return 0;
}