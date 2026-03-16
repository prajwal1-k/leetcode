class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        set<int>sums;

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){

                // k = 0 (Case)
                sums.insert(grid[i][j]);
                int max_k = min(min(i, j), min(rows-1-i, cols-1-j));

                for(int k = 1; k <= max_k; k++){
                    int total = 0;

                    // top -> right
                    int x = i-k, y = j;
                    for(int d = 0; d < k; d++)
                        total += grid[x+d][y+d];

                    // right -> bottom
                    x = i; y = j+k;
                    for(int d = 0; d < k; d++)
                        total += grid[x+d][y-d];

                    // bottom -> left
                    x = i+k; y = j;
                    for(int d = 0; d < k; d++)
                        total += grid[x-d][y-d];

                    // left -> top
                    x = i; y = j-k;
                    for(int d = 0; d < k; d++)
                        total += grid[x-d][y+d];

                    sums.insert(total);
                }
            }
        }
        vector<int> ans;
        for(auto it = sums.rbegin(); it != sums.rend() && ans.size() < 3; ++it)
            ans.push_back(*it);

        return ans;
    }
};