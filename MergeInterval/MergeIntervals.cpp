 vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        vector<int> temp=intervals[0];
        for(auto i:intervals){
            if(temp[1]>=i[0]){
                temp[1]=max(temp[1],i[1]);
                
            }
            else{
                ans.push_back(temp);
                temp=i;
            }
            
        }
        ans.push_back(temp);
        return ans;   
    }
