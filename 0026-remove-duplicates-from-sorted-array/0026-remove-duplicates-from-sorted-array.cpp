class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x = nums.size();     // Here we are checking the length of the nums values

        // if x is equal to '0' then we have to return 0 and there is no execution of the code
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
