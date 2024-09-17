class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        std::unordered_map<std::string, int> freqMap;
        std::vector<string> words;
        for (int i = 0; i < s1.size(); i++)
        {
            std::string word;
            while (i < s1.size() && s1[i] != ' ')
            {
                word += s1[i];
                i++;
            }
            freqMap[word]++;
        }
        for (int i = 0; i < s2.size(); i++)
        {
            std::string word;
            while (i < s2.size() && s2[i] != ' ')
            {
                word += s2[i];
                i++;
            }
            freqMap[word]++;
        }
        for (auto it = freqMap.begin(); it != freqMap.end(); it++)
        {
            if (it->second == 1)
                words.push_back(it->first);
        }

        
        return words;
    }
};