int maximumDifference(int* nums, int numsSize) {
    int minVal = nums[0];
    int maxDiff = -1;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] > minVal) {
            int diff = nums[i] - minVal;
            if (diff > maxDiff) {
                maxDiff = diff;
            }
        } else if (nums[i] < minVal) {
            minVal = nums[i];
        }
    }

    return maxDiff;
}