class Node {
public:
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = nullptr;
    }
};

class MyLinkedList {
public:
    Node* head;

    MyLinkedList() {
        head = nullptr;
    }

    int get(int index) {
        Node* curr = head;

        while(curr && index--) {
            curr = curr->next;
        }

        return curr ? curr->val : -1;
    }

    void addAtHead(int val) {
        Node* node = new Node(val);
        node->next = head;
        head = node;
    }

    void addAtTail(int val) {
        Node* node = new Node(val);

        if(!head) {
            head = node;
            return;
        }

        Node* curr = head;

        while(curr->next)
            curr = curr->next;

        curr->next = node;
    }

    void addAtIndex(int index, int val) {
        if(index == 0) {
            addAtHead(val);
            return;
        }

        Node* curr = head;

        while(curr && --index) {
            curr = curr->next;
        }

        if(!curr) return;

        Node* node = new Node(val);
        node->next = curr->next;
        curr->next = node;
    }

    void deleteAtIndex(int index) {
        if(!head) return;

        if(index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* curr = head;

        while(curr->next && --index) {
            curr = curr->next;
        }

        if(!curr->next) return;

        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }
};
