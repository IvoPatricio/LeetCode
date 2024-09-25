class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::set<int> setNums(nums.begin(), nums.end());
        int count = 1;
        int result = 0;
        for (auto it = setNums.begin(); it != setNums.end(); it++)
        {
            if (setNums.count(*it + 1) == 1)
                count++;
            else
                count = 1;
            result = std::max(result, count);
        }
        return result;
    }
};