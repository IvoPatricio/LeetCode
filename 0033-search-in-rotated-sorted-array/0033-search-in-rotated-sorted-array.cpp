class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        std::vector<int> result(nums.begin(), nums.end());
        sort(result.begin(), result.end());
        int left = 0;
        int right = result.size() - 1;
        int found = -1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (result[mid] == target)
            {
                found = 1;
                break;
            }
            else if (result[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        if (found == -1)
            return -1;
        else
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == target)
                    return i;
            }
        }
        return -1;
    }
};