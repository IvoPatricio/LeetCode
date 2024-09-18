class Solution {
public:
    bool countBits(int num, int k)
    {
        int count = 0;
        while(num > 0)
        {
            if (num & 1)
                count++;
            num >>= 1;
        }
        if (count == k)
            return true;
        return false;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (countBits(i, k) == true)
                sum += nums[i];
        }
        return sum;
    }
};