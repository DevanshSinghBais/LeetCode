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
    ListNode* reverseKGroup(ListNode* head, int k) {
            int cnt = 0;
    ListNode* temp = head;

    while (temp != nullptr) {
        cnt++;
        temp = temp->next;
    }


        ListNode* first = new ListNode(0);
        first->next = head;
        head = first;
        ListNode *second,*curr,*prev,*front;
        int x;
        int y = cnt/k;
        while(y--)
        {
            x = k;
            second = first->next;
            prev = first;
            curr = first->next;
           
            while(x--&&curr)
            {
                front = curr->next;
                curr->next = prev;
                prev = curr;
                curr = front;
                
                

            }
            first->next = prev;
            second->next = curr;
            first = second;
             

        } 
        first = head;
        head = head->next;
        delete first;
        return head;

        
    }
};
