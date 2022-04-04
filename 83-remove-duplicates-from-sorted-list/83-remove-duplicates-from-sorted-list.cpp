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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode *ptr = head;
        ListNode *curr = ptr;
        
        while(ptr!=NULL){
            
            curr = ptr;
            
            if(ptr->next!=NULL){
                while(ptr->val == ptr->next->val){
                    ptr = ptr->next;
                    if(ptr->next==NULL) break;
                }
                    
            }
            
            curr->next = ptr->next;
            ptr = ptr->next;
            
        }
        return head;
    }
};