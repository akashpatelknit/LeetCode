class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* temp = head;
        ListNode* curr = head;

        while(temp!=nullptr){
            curr = temp;
            temp = temp->next;
            curr->next = prev;
            prev = curr;
        }

        return curr;
    }

};