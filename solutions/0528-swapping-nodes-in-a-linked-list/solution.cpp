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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        int count = 0;
        while(temp)
        {
            temp = temp->next;
            count++;
        }
        count = count - k;
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        while(count--)
        {
            temp2 = temp2->next;
        }
        k--;
        while(k--)
        {
            temp1 = temp1->next;
        }
        int x;
        x = temp1->val;
        temp1->val = temp2->val;
        temp2->val = x;
        return head;

    
    }
};
