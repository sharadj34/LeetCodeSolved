class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int ans = 0;
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<t.size(); j++)
            {
                if(t[j] == s[i])
                ans = ans + abs(i-j);
            }
        }
        return ans;
    }
};