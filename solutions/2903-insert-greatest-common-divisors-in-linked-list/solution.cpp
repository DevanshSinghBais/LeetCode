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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;

        while (curr->next) {
            int g = __gcd(curr->val, curr->next->val);

            ListNode* node = new ListNode(g);
            node->next = curr->next;
            curr->next = node;

            curr = node->next;
        }

        return head;
    }
};
