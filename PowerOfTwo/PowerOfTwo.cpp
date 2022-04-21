    bool isPowerOfTwo(int n) {
        int m=1;
        while(m<=n && m>0){
            if(m==n){
                return true;
            }
            m= m <<1 ;
        }
        return false;
    }
------------------MY SOLUTION-------------------------------
  
  
  
  ---------------BEST SOLUTION------------------------------
  
      bool isPowerOfTwo(int n) {
        if(n&(n-1)==0)
          return true;
        
        return false;
    }
