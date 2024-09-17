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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (head == nullptr || head->next == nullptr || head->next->next == nullptr) 
        {
            return vector<int>{-1, -1};
        }
        
        vector<int> CriticalNodes;
        int value = 1;
        ListNode* temp1 = head;
        ListNode* temp2 = head->next;
        ListNode* temp3 = head->next->next;
        while (temp3 != nullptr) 
        {
            if ((temp2->val > temp1->val && temp2->val > temp3->val) || 
                (temp2->val < temp1->val && temp2->val < temp3->val)) {
                CriticalNodes.push_back(value);
            }
            temp1 = temp2;
            temp2 = temp3;
            temp3 = temp3->next;
            value++;
        }
        if (CriticalNodes.size() < 2) {
            return vector<int>{-1, -1};
        }
        int distance = INT_MAX;
        for (int i = 1; i < CriticalNodes.size(); i++) {
            distance = min(distance, CriticalNodes[i] - CriticalNodes[i-1]);
        }
        return {distance, CriticalNodes.back() - CriticalNodes[0]};
    }
};