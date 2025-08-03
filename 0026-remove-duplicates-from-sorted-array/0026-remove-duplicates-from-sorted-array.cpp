class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x = nums.size();

        if(x == 0)
        return 0;

        int result = 1;
        for(int i = 1; i < x; i++){
            if(nums[i] != nums[i-1]){
                nums[result] = nums[i]; 
                result++;
            }

        }
        return result;
    }
};