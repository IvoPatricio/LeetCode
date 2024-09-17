/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        if (head == nullptr)
            return 0;
        int count = 0;
        unordered_map<int, int> findvalMap;
        for (int i = 0; i < nums.size(); i++)
            findvalMap[nums[i]] = 1;
        while (head) {
            if (findvalMap[head->val] == 1)
            {
                if (head->next == nullptr || findvalMap[head->next->val] != 1)
                    count++;
            }
            head = head->next;
        }
        return count;
    }
};