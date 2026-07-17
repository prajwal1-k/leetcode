class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
        int mx = *max_element(nums.begin(), nums.end());

        // Frequency of each number
        vector<long long> freq(mx + 1, 0);
        for (int x : nums)
            freq[x]++;

        // cnt[d] = number of elements divisible by d
        vector<long long> cnt(mx + 1, 0);
        for (int d = 1; d <= mx; d++) {
            for (int m = d; m <= mx; m += d)
                cnt[d] += freq[m];
        }

        // exact[d] = number of pairs with gcd exactly d
        vector<long long> exact(mx + 1, 0);
        for (int d = 1; d <= mx; d++) {
            exact[d] = cnt[d] * (cnt[d] - 1) / 2;
        }

        // Inclusion-Exclusion
        for (int d = mx; d >= 1; d--) {
            for (int m = d + d; m <= mx; m += d) {
                exact[d] -= exact[m];
            }
        }

        // Prefix sum of pair counts
        vector<long long> pref(mx + 1, 0);
        for (int d = 1; d <= mx; d++) {
            pref[d] = pref[d - 1] + exact[d];
        }

        vector<int> ans;
        ans.reserve(queries.size());

        for (long long q : queries) {
            // Find first gcd whose cumulative count > q
            int g = lower_bound(pref.begin() + 1, pref.end(), q + 1) - pref.begin();
            ans.push_back(g);
        }

        return ans;
    }
};