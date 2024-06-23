    bool isPalindrome(long long x) {
  
      if(x==0){
        return true;
      }
        if(x<0 ){
          return false;
        }
            long long sum=0,r;
      long long k=x;
       while(x!=0){
         r=x%10;
          sum=sum*10+r;
         x=x/10;
        
       }
       if(sum==k){
         return true;
       }
       



         return false;
       
      
    }