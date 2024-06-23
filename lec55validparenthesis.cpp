
#include<iostream>
#include<stack>
using namespace std;
bool isValidParenthesis(string s)
{
    stack<char> str;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{'|| s[i]=='['){
                str.push(s[i]);
        }
        else{
                if (!str.empty()) {

                  if ((str.top() == '(' && s[i] == ')') ||
                      (str.top() == '{' && s[i] == '}') ||
                      (str.top()=='[' && s[i]==']')) {
                    str.pop();
                    

                  }
                   else {
                    return false;
                  }
                }
                else{
                    return false;
                }
                

        }
    }
    if(!str.empty()){         // if str becomes empty that means all pops successful,so balanced
        return false;
    }
    else{
        return true;
    }
}