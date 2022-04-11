int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector <int> preSum(n,0) , postSum(n,0);
        preSum[0]=nums[0];
        postSum[n-1]=nums[n-1];
        for(int i=1, j=n-2;i<n;i++,j--){
            preSum[i]=nums[i]+preSum[i-1];
            postSum[j]=nums[j]+postSum[j+1];
           
        }
        for(int i=0;i<n;i++){
             if(preSum[i]==postSum[i]){
                return i;
            }
        }
        return -1;
    }



