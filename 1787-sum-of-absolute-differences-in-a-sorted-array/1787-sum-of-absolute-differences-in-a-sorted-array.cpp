class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> result(nums.size(), 0);

        int totalSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            totalSum += nums[i];
        }
        int leftSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int rightSum = totalSum - leftSum - nums[i];
            result[i] = (i * nums[i] - leftSum) + (rightSum - (nums.size() - i - 1) * nums[i]);
            leftSum += nums[i];
        }
        return result;
    }
};