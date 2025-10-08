class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> a;
        for(int x: nums) 
        a.push_back(to_string(x));    // convert all int to string (since conc matters)

        sort(a.begin(), a.end(),compare);

        if(a[0] == "0")
        return "0";   // all zero

        string res;
        for(auto &s: a)
        res += s;

        return res;

    }

    static bool compare(string &a, string &b){
        return (a + b) > (b + a);  // compares the element
    }
};