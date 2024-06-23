#include<iostream>
using namespace std;
bool palindrome(int i,int j, string s){
    if(i >j){
        return true;                   

    }
                                      //to check if the string is palindrome
    if(s[i]!=s[j]){
        return false;
    }
    if(s[i]==s[j]){
    i++;
    j--;
    return palindrome(i,j,s);
    }

}
int main(){
    string s="abbcklcbba";
    cout<<palindrome(0,s.length()-1,s);

return 0;
}