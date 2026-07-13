class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>result;

        for(int startDigit = 1; startDigit < 9; startDigit++){
            int currentNum = startDigit;
                for (int nextNum = startDigit + 1; nextNum < 10; nextNum++){
                    currentNum = currentNum * 10 + nextNum;

                    if(currentNum >= low && currentNum <= high){
                    result.push_back(currentNum);
                    }
                }
        }
        // sort it in the ascending order
        sort(result.begin(), result.end());
      
        return result;
    }
};