class Solution {
public:
    int balancedStringSplit(string s) {
        int countR = 0, countL = 0, finalCount = 0;

        for(int i =0; i<s.size(); i++)
        {
            if(s[i] == 'R')
                countR++;

            else if(s[i] == 'L')
                countL++;
            
            if(countR == countL)
            {
                finalCount++;
                countR = countL = 0;
            }
        }
        return finalCount;
    }
};