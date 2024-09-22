class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;
        std::unordered_map<char, int> freqS;
        for(char c : s)
            freqS[c]++;
        std::unordered_map<char, int> freqT;
        for(char c : t)
            freqT[c]++;
        for (auto it = freqS.begin(); it != freqS.end(); it++)
        {
            if (freqS[it->first] != freqT[it->first])
                return false;
        }
        return true;
    }
};