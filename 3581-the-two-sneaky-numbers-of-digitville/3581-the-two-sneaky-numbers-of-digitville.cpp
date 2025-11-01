class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>result;
        int n = nums.size();

        // This problem can be solved using the frequency map 

       // freqeuncy of an array to count the occ of each number
        int freq[100] = {0};

        for(int i: nums){
            freq[i]++;


            // If this number appears exactly twice, add it to result
            if(freq[i] == 2){
            result.push_back(i);
            }
        }
    return result;
    }
};