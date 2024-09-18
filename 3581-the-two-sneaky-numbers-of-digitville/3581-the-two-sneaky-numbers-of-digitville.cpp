class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> result;
        std::unordered_set<int> SetNums;
        for (int i = 0; i < nums.size(); i++)
        {
            if (SetNums.count(nums[i]) == 0)
                SetNums.insert(nums[i]);
            else
                result.push_back(nums[i]);
        }
        return result;
    }
};