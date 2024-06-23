#include<iostream>
#include<vector>
using namespace std;
string longestCommonPrefix(vector<string> &arr, int n)
{
       string ans="";
       
       for(int i=0;i<arr[0].length();i++){
           char ch=arr[0][i];
           bool temp=true;
           for(int j=1;j<arr.size();j++){
               if(ch!=arr[j][i]){
                    temp=false;
                    break;                 // t.c=o(m*n) where m islength of longest common prefix and n is no of strings
               }
           }
           if(temp==true){
               ans.push_back(arr[0][i]);
           }
           else{
               break;
           }
       }
       return ans;
}
/*                                        // approach 2 with trie
class trienode{
    public:
    char data;
    trienode* children[26];
    bool isterminal;
    int childcount;  
    trienode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;   
        }
        isterminal=false;
        childcount=0;
        
    }
};
class trie{
  
      public:
      trienode* root;
      trie(char ch){
          root=new trienode(ch);
      }
    void insertutil(trienode* root, string word) {
        // Base case
        if (word.length() == 0) {
            root->isterminal = true;
            return;
        }

        int index = word[0] - 'a';
        trienode* child;
        if (root->children[index] != NULL) {
            // If present
            child = root->children[index];
        }
        else {
            // If absent
            child = new trienode(word[0]);
            (root->childcount)++;
            root->children[index] = child;
        }

        // Recursion
        insertutil(child, word.substr(1));
    }

    void insertword(string word) {
        insertutil(root, word);
    }
    string lcp(string str,string &ans){
        for(int i=0;i<str.length();i++){
            char ch=str[i];
            int index=ch-'a';
            if(root->childcount==1){
                ans.push_back(ch);
                // aage badh jao
                root=root->children[index];
            }
            else{
                break;
            }
             if(root->isterminal==true){
                break;
            }
            
        }
        return ans;
        
    }
};
string longestCommonPrefix(vector<string> &arr, int n)
{
    trie* t = new trie('\0');
    for(int i=0;i<arr.size();i++){
        t->insertword(arr[i]);
    }
    string ans="";
    string first=arr[0];
    return t->lcp(first,ans);
    
}
*/