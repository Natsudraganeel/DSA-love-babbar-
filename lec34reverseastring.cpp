#include<iostream>

using namespace std;

void reverse(int i,int j,string& s){        // we use pass by reference here .Call by value doesnt work for void functions as we know
    if(i>j){
        return ;                    //return ; is akind of braek in recursion
    }
    swap(s[i],s[j]);                  //swap inbuit function 
    i++;
    j--;

     reverse(i,j,s);


}
int main(){
    string s="hemlo";
    reverse(0,s.length()-1,s);
    cout<<s;

return 0;
}