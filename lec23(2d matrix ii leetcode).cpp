
#include<iostream>
#include<vector>
using namespace std;
int main(){

return 0;
}bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>arr;
        int row=matrix.size();
        /*int col=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                arr.push_back(matrix[i][j]);
            }
        }*/
       for(int i=0;i<row;i++){
        int s=0;
        int e=matrix[0].size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(matrix[i][mid]==target){
                return true;
            }
            else if(matrix[i][mid]>target){
                e=mid-1;

            }
            else{
                 s=mid+1;
            }
            mid=s+(e-s)/2;

        }

       }
     
        return false;
    }