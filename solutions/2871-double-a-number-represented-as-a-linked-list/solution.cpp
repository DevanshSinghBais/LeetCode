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
    ListNode* reverse(ListNode* head) {
        ListNode *prev = nullptr, *curr = head;

        while (curr) {
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        return prev;
    }

    ListNode* doubleIt(ListNode* head) {
        head = reverse(head);

        ListNode* curr = head;
        ListNode* prev = nullptr;
        int carry = 0;

        while (curr) {
            int x = curr->val * 2 + carry;
            curr->val = x % 10;
            carry = x / 10;

            prev = curr;
            curr = curr->next;
        }

        if (carry)
            prev->next = new ListNode(carry);

        return reverse(head);
    }
};
