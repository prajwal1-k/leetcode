class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size();
        int total = 0;

        for (int i = 1; i< n; i++){
            // now we will compare the current ballon color with previous one
            if(colors[i] == colors[i - 1]){
                // if color are same, remove the one with smaller neededtime
                total += min(neededTime[i], neededTime[i-1]);

                // keep the ballon with the higher removal time for next comparision
                neededTime[i] = max(neededTime[i], neededTime[i-1]);
            }
            // if color differs then continue to next ballon
        }
        return total;
    }
};