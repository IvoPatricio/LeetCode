class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> mapNums;
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = target - nums[i];
            if (mapNums.find(sum) != mapNums.end())
            {
                return {mapNums[sum], i};
            }
            mapNums[nums[i]] = i;
        }
        return {0, 0};
    }
};