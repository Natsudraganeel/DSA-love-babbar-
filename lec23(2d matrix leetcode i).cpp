 
#include<iostream>
#include<vector>
using namespace std;
int main(){

return 0;
}
 bool searchMatrix(vector<vector<int>>& matrix, int target) {
     
     int rows=matrix.size();//gives no. of rows
     int columns=matrix[0].size();   //gives no. of columns
     int s=0;
     int e=rows*columns-1;
     int mid=s+(e-s)/2;

     while(s<=e){
         if(matrix[mid/columns][mid%columns]==target){
             return 1;

         }
         else if(matrix[mid/columns][mid%columns]>target){
                 e=mid-1;
         }
         else{
            s= mid+1;
         }
         mid=s+(e-s)/2;

     }






    return 0;
        
    }