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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        //base case
        if(head == NULL || head->next == NULL) return head;
        //begins
        ListNode* prev = head;
        ListNode* curr = head->next;
        while(curr!=NULL){
        int g = gcd(prev->val, curr->val);
        ListNode* newNode = new ListNode(g);
        prev ->next = newNode;
        newNode->next = curr;
        prev=curr;
        curr = prev->next;
        }
        return head;
    }
};