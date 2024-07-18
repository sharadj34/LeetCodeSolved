class Solution {
public:
    string reverseAns(string st){
        int start = 0;
        int end = st.size() - 1;

        while(start < end)
        {
            swap(st[start], st[end]);
            start++;
            end--;
        }

        return st;
    }
    string finalString(string s) {
        int n = s.size();
        string ans = "";
        for(int i=0; i<n; i++)
        {
            char ch = s[i];
            if(ch == 'i')
            {
                ans = reverseAns(ans);
            }

            else 
            {
                ans = ans + ch;
            }
        }
        return ans;
    }
};