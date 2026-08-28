class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        int n = s.size();
        int left, right = 0;
        int i = 0;

        while(i < n){
            while(i < n && s[i] == ' ')
            i++;

            if(i == n)
                break;
            left = right;
            while(i < n && s[i] != ' ')
            s[right++] = s[i++];

            reverse(s.begin() + left, s.begin() + right);
            s[right++] = ' ';
        }
        if(right > 0)
            right--;
        
        s.resize(right);
        return s;
        
    }
};