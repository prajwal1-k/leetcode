int compare(const void * a, const void* b){
    int x = *(int *)a;
    int y = *(int *)b;
    return (x > y) - (x < y);
}
int threeSumClosest(int* nums, int numsSize, int target) {
    int closest = nums[0] + nums[1] + nums[2];

    qsort(nums, numsSize, sizeof(int), compare);

    for(int i = 0; i < numsSize; i++){
        int left = i + 1;
        int right = numsSize - 1;


        while(left < right){
            int sum = nums[i] + nums[left] + nums[right];

            //update the closest if currrent sum is sloest to target
            if(abs(sum - target) < abs(closest - target)){
                closest = sum;
            }

            if(sum < target){
                left++;
            } else if(sum > target){
                right--;
            }
            else{
                return target;
            }
        }
    }
    return closest;
}
