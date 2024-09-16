class Solution {
public:
    int numSplits(string s) 
    {
        if (s.size() < 2)
            return 0;

        unordered_map<char, int> leftCount;
        unordered_map<char, int> rightCount;

        for (int i = 0; i < s.size(); i++) {
            rightCount[s[i]]++;
        }
        int left = 0;
        int right = rightCount.size();
        int count_good = 0;
        for (int i = 0; i < s.size() - 1; ++i)
        {
            if (leftCount[s[i]] == 0) {
                left++;
            }
            leftCount[s[i]]++;
            rightCount[s[i]]--;
            if (rightCount[s[i]] == 0) {
                rightCount.erase(s[i]);
                right--;
            }
            if (left == right) {
                ++count_good;
            }
        }

        return count_good;
    }
};