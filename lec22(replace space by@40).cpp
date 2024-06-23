#include<iostream>
#include<string>
using namespace std;
string replaceSpaces(string str){
	
	string t="@40";
		for(int i=0;i<str.length();i++){
		if(str[i]==' '){
			str.replace(str.begin()+i,str.begin()+i+1,t.begin(),t.end());
			
		}
	}
	return str;

}
int main(){
    string s;
    getline(cin,s);
    cout<<replaceSpaces(s);
   
return 0;
}
