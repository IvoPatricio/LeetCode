class Solution {
public:
    int balancedStringSplit(string s) {
        int RL = 0;
        int count = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'L')
                RL++;
            else if (s[i] == 'R')
                RL--;
            if (RL == 0)
                count++;
        }
    
        return count;
    }
};