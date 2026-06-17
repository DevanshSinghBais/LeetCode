class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        vector<int> small, large;

        ListNode* temp = head;

        while (temp) {
            if (temp->val < x)
                small.push_back(temp->val);
            else
                large.push_back(temp->val);

            temp = temp->next;
        }

        temp = head;

        for (int val : small) {
            temp->val = val;
            temp = temp->next;
        }

        for (int val : large) {
            temp->val = val;
            temp = temp->next;
        }

        return head;
    }
};
