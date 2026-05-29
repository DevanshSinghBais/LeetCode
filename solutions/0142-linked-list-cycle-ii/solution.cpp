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
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*,int>mpp;
        ListNode* temp = head;
        int i = 0;
        while(temp)
        {
            if(mpp.find(temp)!=mpp.end())
            {
                return temp;
            }
            mpp[temp] = i;
            i++;
            temp = temp->next;
        }
        return NULL;
    }
};
