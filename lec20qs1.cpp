#include<iostream>
#include<vector>
using namespace std;

vector<int> road(vector<int> vec){
    int s=0;
    int e=vec.size()-1;
    while (s<=e)
    {
        swap(vec[s],vec[e]);
        s++;
        e--;
    }
    return vec;


}


int main(){
    vector<int>v;
    int size;
    cin>>size;
    int element;
    for (int i = 0; i < size; i++)
    {
        cin>>element;
        v.push_back(element);
    }
    vector<int> ans=road(v);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    
return 0;

}
    

