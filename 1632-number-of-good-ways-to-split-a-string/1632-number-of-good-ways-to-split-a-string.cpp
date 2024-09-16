class Solution {
public:
    int numSplits(string s) 
    {
        int n = s.size();
    
        if (n < 2)
            return 0;

        unordered_map<char, int> leftCount;
        unordered_map<char, int> rightCount;

        for (int i = 0; i < s.size(); i++) {
            rightCount[s[i]]++;
        }
        int leftDistinct = 0;
        int rightDistinct = rightCount.size();
        int count_good = 0;
        for (int i = 0; i < n - 1; ++i) {
            char c = s[i];
            if (leftCount[c] == 0) {
                leftDistinct++;
            }
            leftCount[c]++;
            rightCount[c]--;
            if (rightCount[c] == 0) {
                rightCount.erase(c);
                rightDistinct--;
            }
            if (leftDistinct == rightDistinct) {
                ++count_good;
            }
        }

        return count_good;
    }
};