#include<iostream>
#include<string>
using namespace std;
 bool re(char ch){
         if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch<='9')){
             return 1;
         }
         
             return 0;
         
     }


    char tolowercase(char ch){
        if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
            return ch;
        }
        else {
            ch=ch-'A'+'a';
            return ch;
        }
    }
    bool isPalindrome(string s) {
     string temp="";//empty string
     for(int i=0;i<s.length();i++){
         if(re(s[i])==1){
             temp.push_back(s[i]);

         }
     }
     int i=0;
     int e=temp.length()-1;
     while(i<e){
         if(tolowercase(temp[i])!=tolowercase(temp[e])){
             return 0;
         }
         else{
             i++;
             e--;
         }
          
     }
     return 1;
    }

    int main(){
        string s;
        cin>>s;
        
        cout<<isPalindrome(s);

    }