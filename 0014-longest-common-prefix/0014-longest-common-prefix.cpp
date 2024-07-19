class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // OPTIMAL APPROACH
        if (strs.empty()) return "";
        sort(strs.begin(), strs.end());
        
        string first = strs[0];
        string last = strs[strs.size() - 1];
        
        string result;
        for (int i = 0; i < first.length(); i++) {
            if (first[i] != last[i])
                break;
            result += first[i];
        }
        
        return result;

        // BRUTE FORCE APPROACH
        /*
        string res = "";
        for(int i=0; i<strs[0].size(); i++)
        {
            for(auto s:strs)
            {
                if(s[i] != strs[0][i])
                return res;
            }
            res+=strs[0][i];
        }
        return res;
        */
    }
};