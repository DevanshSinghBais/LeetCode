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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        int cnt = 1;
        vector<int>v;
        ListNode* temp = head;
        while(temp)
        {
            if(cnt>=left&&cnt<=right)
            {
                v.push_back(temp->val);
            }
            cnt++;
            temp = temp->next;
        }
        reverse(v.begin(),v.end());
        int m = v.size();
        int cnta = 1;
        ListNode* tempa = head;
        int i = 0;
        while(tempa)
        {
            if(cnta>=left&&cnta<=right)
            {
               tempa->val = v[i];
               i++;
            }
            cnta++;
            tempa = tempa->next;
        }
        return head;




        
    }
};
