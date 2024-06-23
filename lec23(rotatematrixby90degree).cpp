#include<iostream>
#include<vector>

using namespace std;

  
  void rotate(vector<vector<int>>& matrix) {
      
   vector<vector<int>>row;
        for ( int i = 0; i < matrix.size(); i++)
   {
      vector<int> arr;
     for ( int j = matrix.size()-1; j>=0; j--)
     {
        arr.push_back(matrix[j][i]);
     }
     row.push_back(arr);
     
   }
          for ( int i = 0; i < matrix.size(); i++)
   {
      
     for ( int j=0;j<matrix.size();j++)
     {
        matrix[i][j]=row[i][j];
     }
    
   }
 
    }
    int main(){

return 0;
}  