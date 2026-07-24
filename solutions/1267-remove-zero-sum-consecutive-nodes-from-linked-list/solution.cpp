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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* temp = head;

        ListNode* dummy = new ListNode(0);
        dummy->next = temp;
        bool isit = true;

        while (temp) {
            long long sum = temp->val;
            ListNode* temp1 = temp->next;
            if(!sum)
            {
                if(dummy->next==head)
                {
                    head = dummy;
                    isit = false;
                }
                dummy->next = temp->next;
                temp = temp->next;
                continue;

            }

            while (temp1) {
                sum += temp1->val;
                if (sum == 0) {
                    if(dummy->next == head)
                    {
                        head = dummy;
                        isit = false;
                    }    
                    dummy->next = temp1->next;
                    break;
                }
                temp1 = temp1->next;
            }

            if (!temp1) {
                temp = temp->next;
                dummy = dummy->next;
            } else {
                temp = dummy->next;
            }
        }

        if(!isit)
        {
            return head->next;
        }
        return head;
    }
};
