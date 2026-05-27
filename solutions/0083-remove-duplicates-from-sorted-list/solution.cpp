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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp1 = head;
       
        if(temp1==NULL)
        {
            return head;
        }
         ListNode* temp2 = head->next;
         if(temp2==NULL)
         {
            return head;
         }
        while(temp2)
        {
            if(temp1->val==temp2->val)
            {
                temp1->next = temp2->next;

                ListNode* temp3 = temp2;
                temp2 = temp2->next;
                delete temp3;


            }
            else
            {
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
        return head;
        
    }
};
