/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
   
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        ListNode* temp3 = headA;
        ListNode* temp4 = headB;
        int cnta = 0, cntb = 0;
        while(temp1)
        {
            cnta++;
            temp1 = temp1->next;
        }
        while(temp2)
        {
            cntb++;
            temp2 = temp2->next;
        }
        while(cnta>cntb)
        {
            temp3 = temp3->next;
            cnta--;
        }
         while(cntb>cnta)
        {
            temp4 = temp4->next;
            cntb--;
        }
        while(temp3)
        {
            if(temp3==temp4)
            {
                return temp3;
            }
            temp3 = temp3->next;
            temp4 = temp4->next;
        }
        return NULL;

    }
};
