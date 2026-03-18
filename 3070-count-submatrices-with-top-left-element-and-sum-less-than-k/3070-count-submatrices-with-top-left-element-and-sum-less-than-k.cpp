class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
       int m = grid.size();
        int n = grid[0].size();
        int res = 0;

        vector<vector<int>> prefixSum(m, vector<int>(n, 0));

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                prefixSum[i][j] = grid[i][j];

                if(i > 0)
                    prefixSum[i][j] += prefixSum[i-1][j];

                if(j > 0)
                    prefixSum[i][j] += prefixSum[i][j-1];

                if(i > 0 && j > 0)
                    prefixSum[i][j] -= prefixSum[i-1][j-1];

                if(prefixSum[i][j] <= k)
                    res++;
            }
        }
        return res;
    }
};