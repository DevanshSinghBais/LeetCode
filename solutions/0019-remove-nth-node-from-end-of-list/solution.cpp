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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int count = 0;
       ListNode* temp = head;
       while(temp)
       {
        temp = temp->next;
        count++;

       }
       count = count - n;
       ListNode* temp1;
       ListNode* temp2;
       if(count == 0)
       {
            temp1 = head;    
            head = head->next;
            delete temp1;
            return head;
        
       }
       
            temp1 = head;
            temp2 = head->next;
            count--;
            while(count--)
            {
                temp1 = temp1->next;
                temp2 = temp2->next;

            }
            temp1->next = temp2->next;
            delete temp2;
            return head;
       

    }
};
