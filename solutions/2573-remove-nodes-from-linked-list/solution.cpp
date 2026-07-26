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
    ListNode* removeNodes(ListNode* head) {
        vector<int> nums;

    
    ListNode* temp = head;
    while (temp) {
        nums.push_back(temp->val);
        temp = temp->next;
    }

    int n = nums.size();
    vector<int> ans(n, -1);
    stack<int> st; 
    for (int i = 0; i < n; i++) {
        while (!st.empty() && nums[i] > nums[st.top()]) {
            ans[st.top()] = nums[i];
            st.pop();
        }
        st.push(i);
    }

    bool first = true;
    ListNode* prev = head;
    ListNode* curr = head;
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    for(int i = 0;i<n;i++)
    {
        if(ans[i]==-1)
        {
            if(first)
            {
                head = curr;
                dummy->next = head;
                prev = curr;
                first = false;
            }
            else
            {
                prev->next = curr;
                prev = curr;
            }
        }
        curr = curr->next;

    }
    return dummy->next;


    }
};
