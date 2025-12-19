class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;

        int len = nums.size();
        int subset = 1 << len;
        
        for(int i = 0; i < subset; i++){
            vector<int>arr;

            for(int j = 0; j < len; j++){
                if( (1 << j) & i) 
                arr.push_back(nums[j]);
            }
            ans.push_back(arr);
        }
        return ans;
    }
};