class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn = INT_MAX, oddCnt = 0;

        for(int x : nums1){
            mn = min(mn, x);
            if(x % 2 == 1)
                oddCnt++;
        }

        // If all are Even
        return mn % 2 || oddCnt == 0;
    }
};