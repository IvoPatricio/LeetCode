class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < k)
                count++;
        }
        return count;
    }
};