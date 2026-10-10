
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int count = 0;
        ListNode* temp = head;

        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        int pos = count - n + 1;

        if (pos == 1) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        temp = head;

        for (int i = 1; i < pos - 1; i++) {
            temp = temp->next;
        }

        
        ListNode* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;

        return head;
    }
};
