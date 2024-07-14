class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        // int n = indices.size();
        // string ans;
        // ans.resize(n);
        // for(int i=0; i<n; i++)
        // {
        //     ans[indices[i]] = s[i];
        // }
        // return ans;

        map<int,int>mp;
        for(int i=0;i<indices.size();i++){
            mp[indices[i]] = i;
        }
        sort(indices.begin(),indices.end());
        string ans = "";
        for(int i=0;i<indices.size();i++){
            ans+=s[mp[indices[i]]];
        }
        return ans;
    }
};