class Solution {
public:
    int subtractProductAndSum(int n) {
        std::string num = to_string(n);
        int result = 1;
        int sum = 0;
        for (int i = 0; i < num.size(); i++)
        {
            result *= num[i] - '0';
            sum += num[i] - '0';
        }
        result -= sum;
        return result;
    }
};