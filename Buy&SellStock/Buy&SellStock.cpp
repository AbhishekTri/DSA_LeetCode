int maxProfit(vector<int>& prices) {
        int minSoFar=INT_MAX;
        int maxProfit=INT_MIN;
        for(int i =0;i<prices.size();i++){
            if (prices[i]<minSoFar){
                minSoFar=prices[i];
            }
            if((prices[i]-minSoFar)>maxProfit){
                maxProfit=prices[i]-minSoFar;
            }
        }
        return maxProfit;
    }
