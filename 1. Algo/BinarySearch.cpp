int binary_search(vector<int>& nums, int target) {
        int s=0;
        int n=nums.size();
        int e=n-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target)
                return mid;
            else if (nums[mid]>target){
                e=mid-1;
            }
            else
                s=mid+1;
        }
        return -1;
    }
------------------------------------------------------------------
  Binary Search STL
------------------------------------------------------------------

binary_search(arr,arr+n,target);
