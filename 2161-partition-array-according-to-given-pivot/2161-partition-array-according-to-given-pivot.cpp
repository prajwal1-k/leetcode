class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result(nums.size());
        int less = 0;
        int greater = nums.size() - 1;

        for(int i = 0, j = nums.size() - 1; i < nums.size(); i++, j--){
            if(nums[i] < pivot){
                result[less] = nums[i];
                less++;
            }
            if(nums[j] > pivot){
                result[greater] = nums[j];
                greater--;
            }
        }
        while(less <= greater){
            result[less] = pivot;
            less++;
        }

        return result;
    }
};