vector<int> sortedSquares(vector<int>& nums) {
      
        int size = nums.size();
        int start = 0,end = size - 1;
        vector <int> ans(size);
        int temp = size - 1;
            
        for(int i=size-1;i>=0;i--){
            if(abs(nums[end]) > abs(nums[start])){
                int val = nums[end] * nums[end];
                end--;
                ans[temp--] = (val);
            }else{
                 int val = nums[start] * nums[start];
                 start++;
                 ans[temp--] = (val);
            }
        }
        
        return ans;
    }
