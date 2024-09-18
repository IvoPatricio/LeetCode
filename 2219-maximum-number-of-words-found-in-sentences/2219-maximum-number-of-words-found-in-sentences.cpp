class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxCount = 0;
        for (int i = 0; i < sentences.size(); i++)
        {
            int count = 1;
            for (int x = 0; x < sentences[i].size();)
            {
                if (sentences[i][x] != ' ')
                {
                    while (x < sentences[i].size() && sentences[i][x] != ' ')
                        x++;
                }
                else
                {
                    count++;
                    x++;
                }
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }
};