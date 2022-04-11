void moveZeroes(vector<int>& nums) {
        auto a=nums.begin();
        for (int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(*a,nums[i]);
                a++;
            }
        }   
    }
