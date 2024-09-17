class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
        int seconds_passed = 1;
        int memory_allocated = 1;
        while (1)
        {
            if (memory1 >= memory2)
            {
                if (memory1 < memory_allocated)
                    break;
                memory1 -= memory_allocated;
            }
            else if (memory2 > memory1)
            {
                if (memory2 < memory_allocated)
                    break;
                memory2 -= memory_allocated;
            }
            memory_allocated++;
            seconds_passed++;
        }
        return {seconds_passed, memory1, memory2};
    }
};