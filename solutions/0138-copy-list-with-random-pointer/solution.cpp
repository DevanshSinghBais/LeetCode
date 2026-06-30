/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp = head;
        map<Node*,int>v1;
        map<int,Node*>v2;
        if(!head)
        {
            return head;
        }

        Node* top = new Node(temp->val);
        int i = 0,j = 0;
        v1[temp] = i;
        i++;
        temp = temp->next;
        Node* tail = top;
        v2[j] = tail;
        j++;
        
        while(temp)
        {
            v1[temp] = i;
            i++;
            tail->next = new Node(temp->val);
            tail = tail->next;
            v2[j] = tail;
            j++;
            temp = temp->next;
        }
        Node *temp1 = head, *temp2 = top;
        while(temp1)
        {
            if(temp1->random)
            {
                int idx = v1[temp1->random];
                temp2->random = v2[idx];
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return top;


    }
};
