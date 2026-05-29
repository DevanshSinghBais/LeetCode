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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
        {
            return head;
        }
        if(head->next==NULL)
        {
            if(head->val==val)
            {
                return NULL;
            }
        }
        ListNode* temp1 = head;
        ListNode* temp2 = head->next;
        while(temp2)
        {
            if(temp2->val==val)
            {
                temp1->next = temp2->next;
                temp2 = temp2->next;
            }
            else
            {
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
        if(head->val==val)
        {
            head = head->next;
        }
        return head;

    }
};
