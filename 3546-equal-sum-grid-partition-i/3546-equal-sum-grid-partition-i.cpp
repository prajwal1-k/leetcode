class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid[0].size();
        int n = grid.size();

        long long total = 0;
        for (auto &row : grid)
        for (int val : row)
            total += val;

        if(total % 2 != 0)
        return false;

        /// horizontal cut
        long long prefix = 0;
        for(int i = 0; i < n; i++){
            for(int j =0; j < m;j++){
                prefix += grid[i][j];
            }
            if(prefix == total -prefix)
        return true;
        }
        

        //vertical cut
    vector<long long> colSum(m, 0);
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            colSum[j] += grid[i][j];
        }
    }

         long long left = 0;
    for (int j = 0; j < m; j++) {
        left += colSum[j];
        if (left == total - left) return true;
    }

    return false;

    }
};