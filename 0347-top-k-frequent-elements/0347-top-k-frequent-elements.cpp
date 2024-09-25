class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        std::unordered_map<int, int> freqMap;
        std::vector<int> result;
        //std::priority_queue<int, std::vector<int>, std::greater<int>>;
        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> deQueue;

        for (int i = 0; i < nums.size(); i++)
        {
            freqMap[nums[i]]++;
        }
        for (auto it = freqMap.begin(); it != freqMap.end(); it++)
        {
            deQueue.push({it->second, it->first});
            if (deQueue.size() > k)
                deQueue.pop();
        }
        while (!deQueue.empty())
        {
            result.push_back(deQueue.top().second);
            deQueue.pop();
        }
        return result;
    }  
};