class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
    string s, word;
    int maxi = INT_MIN;
    for(int i = 0; i < sentences.size(); i++)
    {
        s = sentences[i];
        stringstream str(s);

        int count = 0;
        while (str >> word)
        count++;

        maxi = max(count, maxi);
    }
    return maxi;
    }
};