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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        sort(nums.begin(),nums.end());
        ListNode* curr = head->next;
        ListNode* prev = head;
        while(curr)
        {
            if(binary_search(nums.begin(), nums.end(), curr->val))
            {
                prev->next = curr->next;
                curr = curr->next;
                

            
            }
            else
            {
                prev = prev->next;
                curr = curr->next;
            }
        }
        if(binary_search(nums.begin(), nums.end(), head->val))
        {
            return head->next;
        }
        return head;

    }
};
