int maxSubArray(vector<int>& nums) {
        int max1 =INT_MIN ,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
             max1 = max(max1,sum);

            if(sum<0)
                sum=0;
        }
        return max1;
    }
