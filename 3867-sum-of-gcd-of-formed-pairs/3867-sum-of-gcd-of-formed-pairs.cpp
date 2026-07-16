class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();

        int mx = 0;
        vector<int> prefixGcd(n);

        for(int i = 0; i < n; i++){
            mx = max(mx, nums[i]);

            prefixGcd[i] = gcd(nums[i], mx);  // value of prefixGcd
        }

        // sort the number in non-decreasing order
        sort(prefixGcd.begin(), prefixGcd.end());
        int l = 0, r = n - 1;    // l - left, r - right

        long long result = 0;

        while(l < r){
            result += gcd(prefixGcd[l], prefixGcd[r]);
            l++;
            r--;
        }

        return result;
        
    }
};