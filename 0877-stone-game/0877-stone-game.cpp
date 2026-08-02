class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        return true;
    }
};

// Spaced OPtimized
// class Solution {
// public:
//     bool stoneGame(vector<int>& piles) {
//         int n = piles.size();
//         vector<int> dp = piles;

//         for (int len = 2; len <= n; len++) {
//             for (int i = 0; i <= n - len; i++) {
//                 int j = i + len - 1;
//                 dp[i] = max(piles[i] - dp[i + 1],
//                             piles[j] - dp[i]);
//             }
//         }

//         return dp[0] > 0;
//     }
// };