class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        for (int i = 0; i < numbers.size(); i++)
        {
            int left = i + 1;
            int right = numbers.size() - 1;
            int diff = target - numbers[i];
            while (left <= right)
            {
                int mid = left + (right - left) / 2;
                if (numbers[mid] == diff)
                {
                    if (i + 1 > mid + 1)
                        return {mid + 1, i + 1};
                    else
                        return {i + 1, mid + 1};
                }
                else if (numbers[mid] < diff)
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
        return {0, 0};
    }
};