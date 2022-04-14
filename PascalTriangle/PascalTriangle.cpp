 vector<int> generate(int numRows) {
        int n=numRows;
        vector<int> res[n];
        res[0][0]=1;
        for(int i=1;i<n;i++){
            for(int j=1;j<=n;j++)
            {
                if(j==0||j==n){
                    res[i][j]=1;
                }
                else{
                    res[i][j]=res[i-1][j-1]+res[i-1][j];
                }
            }
            
        }
        return res;
    }
-------------------------------------------------------------------------
   vector<vector<int>> generate(int numRows) {
    
    vector<vector<int>> r(numRows);
    for (int i = 0; i < numRows; i++) {
        r[i].resize(i + 1);
        r[i][0] = r[i][i] = 1;
                 
        for (int j = 1; j < i; j++)
            r[i][j] = r[i - 1][j - 1] + r[i - 1][j];
         
    }
    return r;
}
