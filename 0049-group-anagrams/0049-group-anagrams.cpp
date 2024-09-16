class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        unordered_map<string, vector<string>> SortedMap;
        vector<vector<string>> result;
        for (int i = 0; i < strs.size(); i++)
        {
            string strSort = strs[i];
            sort(strSort.begin(), strSort.end());
            SortedMap[strSort].push_back(strs[i]);
        }
        for (auto it = SortedMap.begin(); it != SortedMap.end(); it++)
        {
            result.push_back(it->second);
        }
        return result;
    }
};