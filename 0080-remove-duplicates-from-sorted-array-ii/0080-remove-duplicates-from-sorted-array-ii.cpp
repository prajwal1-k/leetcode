class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        
        if(nums.size() <= 2)
        return n;


        int i = 2; // right pointer
        for(int j = 2; j < n; j++){   // left pointer
            if(nums[j] != nums[i-2]){
                nums[i] = nums[j];
                i++;
            }
        }

        return i;


    }
};