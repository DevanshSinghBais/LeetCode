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
    void reorderList(ListNode* head) {
        vector<int>v;
        ListNode* temp = head->next;
        while(temp)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }
        int m = v.size();
        int l = 0,r = m-1;
        ListNode* temp1 = head->next;
        
        
            while(l<r)
            {
                temp1->val = v[r];
                temp1 = temp1->next;
                temp1->val = v[l];
                temp1 = temp1->next;
                r--;
                l++;

            }
            if(l==r)
            {
                temp1->val = v[r];
            }
        
        
    }
};
