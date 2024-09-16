class Solution {
public:
    int appendCharacters(string s, string t) {
        int x = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (x < t.size())
            {
                if (s[i] == t[x])
                    x++;
            }
            else
                break;
        }
        return (t.size() - x);
    }
};