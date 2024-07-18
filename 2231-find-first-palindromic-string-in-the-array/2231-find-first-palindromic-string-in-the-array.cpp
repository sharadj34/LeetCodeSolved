class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string ans = "";

        for(int i=0; i<words.size(); i++)
        {
            int start = 0;
            int end = words[i].size() - 1;
            string temp = words[i];
            bool check = true;
            while(start < end)
            {
                if(temp[start] != temp[end])
                {
                    check = false;
                    break;
                }
                start++;
                end--;
            }
            if(check == true)
            {
                ans = ans + temp;
                return ans;
            }
        }
        return ans;
    }
};