class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> numsSet;

        for (int num : nums)
        {
            if (numsSet.count(num) > 0)
                return true;
            numsSet.insert(num);
        }
        return false;
    }
};