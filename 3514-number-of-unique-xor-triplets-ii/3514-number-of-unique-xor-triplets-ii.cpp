class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int MAX_XOR = 2048;

        vector<bool> present(MAX_XOR, false);
            for (int x: nums){
                present[x] = true;
            }

            vector<bool> dp(MAX_XOR, false);
            dp[0] = true;

            for(int step = 0; step < 3; step++){
                vector<bool>next(MAX_XOR, false);

                for(int curr = 0; curr < MAX_XOR; curr++){
                    if(!dp[curr])
                        continue;
                    for(int v = 0; v < MAX_XOR; v++){
                        if(present[v]){
                            next[curr ^ v] = true;
                        }
                    }
                }
                dp = move(next);
            } 
            int result = 0;
            for(bool ok : dp){
                if(ok)
                    result++;
            }
        return result;
    }
};