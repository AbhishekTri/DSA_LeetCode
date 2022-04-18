 int removeDuplicates(vector<int>& nums) {
        int count=1;
        int n=nums.size();
        int i=0;
        int j=0;
        while(j<n){
            if(nums[i]==nums[j]){
                j++;
            }
            else{
                i++;
                nums[i]=nums[j];
                count++;
            }
        }
        
    return count;
    }
