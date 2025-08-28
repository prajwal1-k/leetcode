class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstElement(nums, target);
        int last = findLast(nums, target);

        return {first, last};
    }

    // function to find the first element
    int firstElement(vector<int>& nums, int target){
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;

        // we will do the binary search here
        while (start<=end){
            int mid = (start + end) / 2;

            if (nums[mid] == target){
                ans = mid;
                end = mid - 1; // this is due to search left
            }
            else if(nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return ans;
    }

    // function to find the last element
    int findLast(vector<int>&nums, int target){
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;

        // we will perform binary search here
        while (start<=end){
            int mid = (start + end) / 2;

            if(nums[mid] == target){
                ans = mid;
                start = mid + 1; // this is due to keep seraching on right
            }
            else if (nums[mid] < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return ans;

    }
};