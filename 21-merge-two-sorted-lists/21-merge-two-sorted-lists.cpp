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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode *dummy = new ListNode(0, list1);
        ListNode *ptr1 = dummy, *ptr2 = list2;
        
        while(ptr2!=NULL && ptr1->next!=NULL){
            
            if(ptr1->next->val >= ptr2->val){
                ListNode* tmp = ptr2->next;
                ptr2->next = ptr1->next;
                ptr1->next = ptr2;
                ptr2 = tmp;
            }
            else{
                ptr1 = ptr1->next;
            }
            
        }
        
        if(ptr2) ptr1->next = ptr2;
        
        return dummy->next;
        
    }
};