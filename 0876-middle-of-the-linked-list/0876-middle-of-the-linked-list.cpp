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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;ListNode* ptr=head;
        // int len=0;
        // while(temp!=NULL){
        //     len++;
        //     temp=temp->next;
        // }
        // int cnt=0;
        // int mid=len/2;
        // if(mid==0) return head;
        // while(cnt<mid){
        //     ptr=ptr->next;
        //     cnt++;
        // }
        // return ptr;
        while(ptr!=NULL && ptr->next!=NULL){
            temp=temp->next;
            ptr=ptr->next->next;
        }
        return temp;
    }
};