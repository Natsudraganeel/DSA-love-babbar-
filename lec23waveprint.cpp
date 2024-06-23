#include <bits/stdc++.h>
using namespace std;

 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int>a;
     for(int i=0;i<mCols;i++){
         if( i%2==0){
             for(int j=0;j<nRows;j++){
                 
                 a.push_back(arr[j][i]);
             }

         }
         if(i%2!=0){
             for(int k=nRows-1;k>=0;k--){
                 
                 a.push_back(arr[k][i]);
             }

         }

     }
     return a;
}