class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        // intialise the total value with first value
        int total = target[0];

        // Iterate the array elements starting from the second number
        for(int i = 1; i < target.size(); i++){
            // we will first checks the current element is greater than previous element
            if(target[i] > target[i-1]){
                total += target[i] - target[i-1];
            }
        }
        return total;
    }
};