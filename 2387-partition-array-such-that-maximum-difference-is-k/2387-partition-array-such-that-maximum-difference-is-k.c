int compare(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}
int partitionArray(int* nums, int numsSize, int k) {
    // sort the array
    qsort(nums, numsSize, sizeof(int), compare);

    int count = 0;
    int i = 0;

    while(i < numsSize){
        int minVal = nums[i];
        count++;

        while(i < numsSize && nums[i] - minVal <= k){
            i++;
        }
    }
    return count;
}