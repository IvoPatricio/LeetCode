class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        std::unordered_map<int, int> Counter;
        Counter[0] = 1;
        
        int oddCount = 0;
        int niceCount = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 != 0)
                oddCount++;
            if (Counter.find(oddCount - k) != Counter.end())
                niceCount += Counter[oddCount - k];
            Counter[oddCount]++;
        }
        return niceCount;
    }
};