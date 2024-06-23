//climbing stairs of leetcode
#include<iostream>
using namespace std;
   
    int climbStairs(int n) {    /*time limit exceeded in leetcode as it uses dynmaic prigramming we will learn later.in love babbar codestudio link
                                 is given .i did the same in leetcode */            
            if(n==0){
            return 0;
        }
        if(n==1){
            return 1;            
        }
        if(n==2){
            return 2;
        }
        return climbStairs(n-1)+climbStairs(n-2);
      
       
    }
int main(){



return 0;
}