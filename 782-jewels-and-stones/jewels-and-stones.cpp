class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        int n = jewels.size(); 
        int m = stones.size();
        for(int i=0; i<n; i++)
        {
            char ch = jewels[i];
            for(int j=0; j<m; j++)
            {
                if(ch == stones[j])
                count++;
            }
        }
        return count;
    }
};