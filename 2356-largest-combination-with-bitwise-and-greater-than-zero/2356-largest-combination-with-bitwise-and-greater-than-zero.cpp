class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        cout<<(int)log2(10000000)+1;
        
        int mx_len = 0;
        
        for(int i = 0; i < 24; i++) {
            int x = 1 << i; 
            int cnt = 0; 
            
            for(int num : candidates) {
                if (num & x) ++cnt; 
            }
            mx_len = max(mx_len, cnt);
        }
        return mx_len;
    }
};