/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(next), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        set<int> s;

        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* temp = head;

        while (temp->next) {
            if (temp->val == temp->next->val) {
                s.insert(temp->val);
            }
            temp = temp->next;
        }

        if (s.empty())
            return head;

        ListNode* point = head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* tail = dummy;

        while (point) {
            if (s.find(point->val) != s.end()) {
                while (point && s.find(point->val) != s.end()) {
                    point = point->next;
                }
                tail->next = point;
            } else {
                tail = point;
                point = point->next;
            }
        }

        ListNode* ans = dummy->next;
        delete dummy;
        return ans;
    }
};
