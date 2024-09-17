class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        std::stack<int> values;
        int i = 0;
        int x = 0;
        while (1)
        {
            if (values.empty() || values.top() != popped[x])
            {
                if (i == pushed.size())
                    return false;
                values.push(pushed[i]);
                i++;
            }
            else if (values.top() == popped[x])
            {
                values.pop();
                x++;
            }
            if (x == popped.size())
                return true;
        }
        return false;
    }
};