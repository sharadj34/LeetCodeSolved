class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = 0;
        long long cnt = 0;
        map<int,int> freq;
        while(right<n){
            freq[nums[right]]++;

            while(freq.rbegin()->first - freq.begin()->first > 2){
                freq[nums[left]]--;
                if(freq[nums[left]]==0){
                    freq.erase(nums[left]);
                }
                left++;
            }
            cnt += right-left+1;
            right++;
        }
        return cnt;
        
    }
};