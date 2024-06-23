#include <bits/stdc++.h> 
using namespace std;
bool findRedundantBrackets(string &s)
{
    stack<int>a;
   
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' ){
                a.push(s[i]);

        }
        else{
            
            if(s[i]==')'){
                 bool is=true;
                while(a.top()!='('){
                    if(a.top()=='+' || a.top()=='-' || a.top()=='*' || a.top()=='/' ){
                        is=false; 
                        
                    }
                    else{
                        is=true;
                    }
                     a.pop();
                   
                }
                a.pop();
                 if(is==true){
            return true;
        }
                  
            }

            }
           
        }
       
      return false;
}