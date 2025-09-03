int removeElement(int* nums, int numsSize, int val) {
    int res = 0;

    for(int i = 0;i<numsSize;i++){
        if(nums[i] != val){
            nums[res] = nums[i];
            res++;
        }
    }
    return res;
}
