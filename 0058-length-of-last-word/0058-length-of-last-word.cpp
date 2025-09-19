class Solution {
public:
    int lengthOfLastWord(string s) {
       int end = s.size() - 1;  // Start from the end of the string

       while(end >= 0 && s[end] == ' '){
        end--;
       }

       int start = end;
       while(start >= 0 && s[start] != ' '){
        start--;
       }
            
        
        return end-start;
    }
};