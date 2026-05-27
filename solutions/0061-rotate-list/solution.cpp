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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL)
        {
            return head;
        }
        if(head->next == NULL)
        {
            return head;
        }
        int cnt = 0;
        ListNode* temp1 = head;
        while(temp1->next)
        {
            temp1 = temp1->next;
            cnt++;
        }
        if(k%(cnt+1)==0)
        {
            return head;
        }
        cnt = cnt - k%(cnt+1);
        ListNode* temp2 = head;
        ListNode* temp3 = head->next;
        
        
        
        
        if(k==0)
        {
            return head;
        }
        while(cnt--)
        {
            temp2 = temp2->next;
            temp3 = temp3->next;
        }
        temp2->next = NULL;
        temp1->next = head;
        head = temp3;
        return head;



    }
};
