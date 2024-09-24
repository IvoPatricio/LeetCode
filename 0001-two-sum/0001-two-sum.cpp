class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> mapNums;
        for (int i = 0; i < nums.size(); i++)
        {
            mapNums[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = target - nums[i];
            if (mapNums.find(sum) != mapNums.end())
            {
                if (mapNums[sum] != i)
                    return {mapNums[sum], i};
            }
        }
        return {0, 0};
    }
};