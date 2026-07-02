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
    int numComponents(ListNode* head, vector<int>& nums) {
        int cnt = 0, ans = 0;
        sort(nums.begin(),nums.end());
        ListNode* temp = head;
        while(temp)
        {
            if (binary_search(nums.begin(), nums.end(), temp->val))
            {
                if(cnt)cnt++;

                else
                {
                    cnt++;
                    ans++;
                }
            }
            else
            {
                cnt = 0;
            }
            temp = temp->next;
        }
        return ans;
    }
};
