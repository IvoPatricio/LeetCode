class Solution {
public:
    bool isValid(string s) {
        std::stack<char> StackS;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' ||s[i] == '{' )
                StackS.push(s[i]);
            else
            {
                if (StackS.empty()) {
                    return false;
                }
                if (s[i] == ']' && StackS.top() == '[' || s[i] == '}' && StackS.top() == '{' || s[i] == ')' && StackS.top() == '(')
                {
                    StackS.pop();
                }
                else
                    return false;
            }
        }
        if (StackS.empty())
            return true;
        return false;
    }
};