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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>v(2,-1);
        vector<int>nodes;
        

        ListNode* curr = head->next;
        ListNode* prev = head;
        ListNode* fut = curr->next;
        int x = 2;
        while(fut)
        {
            if(curr->val>prev->val&&curr->val>fut->val)
            {
                nodes.push_back(x);
            }
            if(curr->val<prev->val&&curr->val<fut->val)
            {
                nodes.push_back(x);
            }
            x++;
            prev = curr;
            curr = fut;
            fut = fut->next;
            
        }
        int m = nodes.size();
        if(m>1)
        {
            v[1] = nodes[m-1] - nodes[0];
            int mn = INT_MAX;
            for(int i = 0;i<m-1;i++)
            {
                mn = min(mn,nodes[i+1]-nodes[i]);
            }
            v[0] = mn;
        }
        return v;

       
    }
};