#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    void solve(string digits,   string output,    vector<string>&ans ,int index,string mapping[]){
        //base case
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }
        int number=digits[index]-'0';
                   string rock=mapping[number];
               for(int i=0;i<rock.length();i++){
                   output.push_back(rock[i]);
                   solve(digits,output,ans,index+1,mapping);
                   output.pop_back();
               }

        
    }
    vector<string> letterCombinations(string digits) {
          vector<string>ans;
        if(digits.length()==0){
               return ans;
        }
      
        string output;
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,ans,index,mapping);
        return ans;


        
    }
};