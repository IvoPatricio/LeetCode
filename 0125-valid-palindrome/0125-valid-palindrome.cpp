class Solution {
public:
    bool isPalindrome(string s) {
        std::string str = "";

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ' ')
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                    str += s[i] + 32;
                else if (s[i] >= 'a' && s[i] <= 'z')
                    str += s[i];
                else if (s[i] >= '0' && s[i] <= '9')
                    str += s[i];
            }
        }
        int x = str.size() - 1;
        for (int i = 0; i < str.size() / 2; i++)
        {
            if (str[i] == str[x])
                x--;
            else
                return false;
        }
        return true;
    }
};