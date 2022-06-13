vector<int> diffWaysToCompute(string s) {
        vector<int> res;
        int n=s.size();
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='-'||ch=='+'||ch=='*'){
                string l=s.substr(0,i);
                string r=s.substr(i+1,n);
                vector<int> left=diffWaysToCompute(l);
                vector<int> right=diffWaysToCompute(r);
                
                for(auto i:left){
                    for(auto j:right){
                        if(ch=='+')
                            res.push_back(i+j);
                        if(ch=='-')
                            res.push_back(i-j);
                        if(ch=='*')
                            res.push_back(i*j);
                    }
                }
                
            }
        }
        if(res.empty())
            res.push_back(stoi(s));
        
        return res;
    }
