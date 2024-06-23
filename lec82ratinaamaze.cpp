   #include<iostream>
#include<unordered_map>
#include<vector>
#include<list>
using namespace std;
    bool issafe(int x,int y,int n,vector<vector<bool>>&visited,vector<vector<int>> &m){
        if(x>=0 && x<n && y>=0 && y<n && visited[x][y]!=1 && m[x][y]==1 ){
            return true;
        }
        else{
            return false;
        }
    }
    void solve(int x,int y,vector<vector<int>> &m,vector<string>&ans,vector<vector<bool>>&visited,string path,int n){
          if(x==n-1 && y==n-1){
              ans.push_back(path);         
             return ;
          }
          // down
          if(issafe(x+1,y,n,visited,m)){
              visited[x][y]=1;
              solve(x+1,y,m,ans,visited,path+"D",n);
              
          }
          //left
           if(issafe(x,y-1,n,visited,m)){
              visited[x][y]=1;
              solve(x,y-1,m,ans,visited,path+"L",n);
             
          }
          //right
           if(issafe(x,y+1,n,visited,m)){
              visited[x][y]=1;
              solve(x,y+1,m,ans,visited,path+"R",n);
              
          }
          // up
          if(issafe(x-1,y,n,visited,m)){
              visited[x][y]=1;
              
              solve(x-1,y,m,ans,visited,path+"U",n);
              
              
          }
        visited[x][y]=0;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        vector<vector<bool>>visited(n,vector<bool>(n,0));
        string path="";
        if(m[0][0]==0){
            return ans;
        }
        solve(0,0,m,ans,visited,path,n);
        return ans;
    }