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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> v;

        int size = 0;
        ListNode* temp = head;

        while (temp) {
            size++;
            temp = temp->next;
        }

        temp = head;

        int split = size / k;
        int extra = size % k;

        for (int i = 0; i < k; i++) {

            if (!temp) {
                v.push_back(NULL);
                continue;
            }

            ListNode* curr = temp;

            int partSize = split;
            if (extra > 0) {
                partSize++;
                extra--;
            }

            for (int j = 1; j < partSize; j++) {
                temp = temp->next;
            }

            ListNode* nextPart = temp->next;
            temp->next = NULL;

            v.push_back(curr);

            temp = nextPart;
        }

        return v;
    }
};
