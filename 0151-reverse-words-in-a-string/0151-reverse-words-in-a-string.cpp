class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> ans;

        while(ss >> word)
        ans.push_back(word);

        int n = ans.size();
        for(int i=0; i<n/2; i++)
        swap(ans[i], ans[n-1-i]);

        string final_ans;
        for(int i=0; i<n; i++)
        final_ans += ans[i]+" ";

        final_ans.pop_back();
        return final_ans;
    }
};