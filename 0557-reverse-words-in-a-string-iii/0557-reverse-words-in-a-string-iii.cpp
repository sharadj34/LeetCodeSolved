class Solution {
public:
    string reverseWords(string s) {
        int i=0,j=0;
        while(j!=s.size())
        {
            cout<<i<<" "<<j<<endl;
            if(s[j]==' ' or j==s.size()-1)
            {
                int m = i, n;
                if(j==s.size()-1)
                n=j;
                else
                n=j-1;
                while(m<n)
                {
                    char a = s[m];
                    s[m]=s[n];
                    s[n]=a;
                    m++;
                    n--;
                }
            i=j+1;
            }
            j++;
        }
        return s;
    }
};