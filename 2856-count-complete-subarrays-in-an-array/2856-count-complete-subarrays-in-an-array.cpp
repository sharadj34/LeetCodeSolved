class Solution {
public:
    long long countCompleteSubarrays(vector<int>& nums) {
        int n = nums.size();
        // 1) How many distinct in the whole array?
        unordered_set<int> all(nums.begin(), nums.end());
        int k = all.size();
        
        // 2) Sliding window to count subarrays covering all k distinct
        unordered_map<int,int> freq;
        long long ans = 0;
        int left = 0;
        
        for (int right = 0; right < n; ++right) {
            // include nums[right] in window
            freq[nums[right]]++;
            
            // 3) While window [left..right] contains all k distinct,
            //    every extension to the right end (right..n-1) is also valid.
            while ((int)freq.size() == k) {
                // Count all subarrays that start at 'left' and end at ≥ 'right'
                ans += (n - right);
                
                // Shrink window from the left
                if (--freq[nums[left]] == 0)
                    freq.erase(nums[left]);  // lost one distinct
                left++;
            }
        }
        
        return ans;
    }
};