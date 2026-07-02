/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(nullptr) {}
 * };
 */
class Solution {
public:
    ListNode* head;

    Solution(ListNode* head) {
        this->head = head;
    }

    int getRandom() {
        ListNode* curr = head;
        int ans = 0;
        int cnt = 1;

        while (curr) {
            if (rand() % cnt == 0)
                ans = curr->val;

            curr = curr->next;
            cnt++;
        }

        return ans;
    }
};
