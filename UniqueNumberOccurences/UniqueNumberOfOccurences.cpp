bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        set<int> s;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
       for(auto i :m){
           s.insert(i.second);
       }
        return (m.size() == s.size()? 1:0);
  }
