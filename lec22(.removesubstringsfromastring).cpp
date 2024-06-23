 #include<iostream>
#include<string>
using namespace std;
 string removeOccurrences(string s,string part) {
     int t=  s.find(part);
    if(t<s.length()){
         
          
           int k=part.length();
         
           s.erase(s.begin()+t,s.begin()+t+k);
           return removeOccurrences(s,part);
    }
           
        
            
       else{ 
      return s;
       }
        
    }
    int main(){
    string s;
    string part;
    getline(cin,s);
     getline(cin,part);

    cout<<removeOccurrences( s,part);
   
return 0;
}
