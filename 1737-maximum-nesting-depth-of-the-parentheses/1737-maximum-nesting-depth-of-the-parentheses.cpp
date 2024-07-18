class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int m = 0, ans = 0;
        for(int i=0; i<s.size(); i++)
        {
            char ch = s[i];
            if(ch == '(')
            {
                st.push(ch);
                ans++;
            }

            char top = st.top();
            if(ch == ')' && top == '(')
            {
                st.pop();
                m = max(m,ans);
                ans--;
            }
        }
        return m;
    }
};