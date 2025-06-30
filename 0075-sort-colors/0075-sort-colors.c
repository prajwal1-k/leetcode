void sortColors(int* nums, int numsSize) {
    int low = 0, mid = 0;
    int high = numsSize - 1;

    while(mid<=high){
        if(nums[mid]==0){
        // swap both nums[low] and nums[mid] and also increment the both
        int temp = nums[low];
        nums[low] = nums[mid];
        nums[mid] = temp;
        mid++;
        low++;
    } else if(nums[mid]==1){
        //just move the mid forward
        mid++;
    } else if(nums[mid] == 2){
        int temp = nums[mid];
            nums[mid] = nums[high];
            nums[high] = temp;
            high--;
    }


    }
}