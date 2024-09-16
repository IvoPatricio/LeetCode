class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> times;
        int result = INT_MAX;
        for (int i = 0; i < timePoints.size(); i++)
        {
            int digit = 0;
            digit = ((timePoints[i][0] - '0') * 10) + timePoints[i][1] - '0';
            digit *= 60;
            digit += ((timePoints[i][3] - '0') * 10) + timePoints[i][4] - '0';
            times.push_back(digit);
        }
        sort(times.begin(), times.end());
        for (int i = 1; i < times.size(); i++)
        {
            result = min(result, abs(times[i] - times[i - 1]));
        }
        result = min(result, (1440 - (times[times.size() - 1] - times[0])));
        return result;
    }
};