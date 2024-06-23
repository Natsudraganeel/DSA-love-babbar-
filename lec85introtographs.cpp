#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;


class graph{
  public:
  unordered_map<int,list<int>> m;
  void addedge(int u,int v,int direction){
    // direction=0 for undirected and 1 for directed
      m[u].push_back(v);
      if(direction==0){
              m[v].push_back(u);
      }
  }
  void print(){
    for(auto i:m){
        cout<<i.first<<"->";
        for(auto j:i.second){
            cout<<j<<",";
        }
        cout<<endl;

    }
  }

};
int main(){
    cout<<"enter number of node"<<endl;
    int n;
    cin>>n;
     cout<<"enter number of edges"<<endl;
     int m;
     cin>>m;
     graph g;
     for(int i=0;i<m;i++){
        int d=0;//undirected graph chai;
        int u,v;
        cin>>u;
        cin>>v;
        g.addedge(u,v,d);
     }
     
        g.print();
     
     
return 0;

}