class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream str(s);
        string ans = "";
        string word;
        int count = 0;
        while(str >> word)
        {
        ans = ans + word + " ";
            count++;
            if(count == k)
            {
                ans.pop_back();
                break;
            }
        }
        return ans;
    }
};