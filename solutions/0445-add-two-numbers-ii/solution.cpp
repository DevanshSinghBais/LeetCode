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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* dummy = new ListNode(0);
        ListNode* temp3 = dummy;
        int curr = 0;
        while(temp1&&temp2)
        {   temp1->val += curr;
            int sum = temp1->val+temp2->val;
            curr = sum/10;
            sum = sum%10;
            temp1->val = sum;
            temp3->next = temp1;
            temp3 = temp1;
            temp1 = temp1->next;
            temp2 = temp2->next;


        }
        while(temp1)
        {
            temp1->val += curr;
            curr = temp1->val/10;
            temp1->val = temp1->val%10;
            temp3->next = temp1;
            temp3 = temp1;
            temp1 = temp1->next;
        }
        while(temp2)
        {
            temp2->val += curr;
            curr = temp2->val/10;
            temp2->val = temp2->val%10;
            temp3->next = temp2;
            temp3 = temp2;
            temp2 = temp2->next;
        }
        if(curr)
        {
            ListNode* carry = new ListNode(curr);
            temp3->next = carry;
        }
        dummy->next = reverse(dummy->next);
        return dummy->next;

    }
    ListNode* reverse(ListNode* head){
    
    ListNode* prev = NULL;
    ListNode* curr = head;

    while (curr)
    {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }

    return prev;
}
};
