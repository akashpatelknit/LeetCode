class Solution {
public:
    ListNode* mergeTwoSortedList(ListNode* list1, ListNode* list2){
        if(!list1) return list2;
        if(!list2) return list1;

        if(list1->val<=list2->val){
            list1->next = mergeTwoSortedList(list1->next,list2);
            return list1;
        }else{
            list2->next = mergeTwoSortedList(list1,list2->next);
            return list2;
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* result = NULL;
        for(auto node:lists ){
            result = mergeTwoSortedList(result, node);
        }

        return result;
    }
};