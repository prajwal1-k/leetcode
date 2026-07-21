class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.length();
        int totalOnes = 0;
        int currentIndex = 0;
        int previousZeroSegment = INT_MIN;
        int maxZeroWindow = 0;


        while(currentIndex < n){
            int segmentIndex = currentIndex + 1;

            while(segmentIndex < n && s[segmentIndex] == s[currentIndex]){
                segmentIndex++;
            }

            // calculate the value of current segement
            int segmentLength = segmentIndex - currentIndex;

            if(s[currentIndex] == '1'){
                // If current segment is '1's, add to total count
                totalOnes += segmentLength;
            } else {
                maxZeroWindow = std::max(maxZeroWindow, previousZeroSegment + segmentLength);
                previousZeroSegment = segmentLength;
            }
            // Move to the next segment
            currentIndex = segmentIndex;
        }
        return totalOnes + maxZeroWindow;
    }

};