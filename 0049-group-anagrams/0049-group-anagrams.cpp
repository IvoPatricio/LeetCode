class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        std::unordered_map<std::string, std::vector<string>> freqStrs;
        vector<vector<string>> result;
        for (int i = 0; i < strs.size(); i++)
        {
            std::string str = strs[i];
            sort(str.begin(), str.end());
            freqStrs[str].push_back(strs[i]);
        }
        for (auto it = freqStrs.begin(); it != freqStrs.end(); it++)
        {
            result.push_back(it->second);
        }
        return result;
    }
};