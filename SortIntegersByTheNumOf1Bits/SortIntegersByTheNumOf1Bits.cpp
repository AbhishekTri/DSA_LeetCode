class Solution {
public:

    int countOneBits(int n){
        int count=0;
        while(n){
            count+=n&1;
            n=n>>1;
        }
        return count;
    }

    vector<int> sortByBits(vector<int>& arr) {
        //imp lambda function
        auto lambda=[&](int a,int b){
            int count1_a= countOneBits(a);
            int count1_b= countOneBits(b);

            if(count1_a ==count1_b)
                return a<b;
            
            return count1_a<count1_b;
        };

        sort(arr.begin(),arr.end(),lambda);

        return arr;
    }
};
