class Solution {
public:
    string smallestNumber(string pattern) 
    {
        int value = 1;
        std::string result;
        int count_d = 0;

        for (int i = 0; i < pattern.size(); i++) {
            if (pattern[i] == 'I') {
                result += value + '0';
                value++;
            } 
            else if (pattern[i] == 'D') {
                int x = i;
                count_d = 0;
                while (x < pattern.size() && pattern[x] == 'D') {
                    count_d++;
                    x++;
                }
                for (int d = count_d; d >= 0; d--) {
                    result += (value + d) + '0';
                }
                value += count_d + 1;
                i += count_d;
            }
        }
        if (pattern.back() == 'I') {
            result += value + '0';
        }
        return result;
    }
};