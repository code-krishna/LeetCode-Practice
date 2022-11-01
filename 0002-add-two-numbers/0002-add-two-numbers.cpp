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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *l3 = new ListNode(0);
        
        ListNode* head = l3;
        
        
        int carry=0;
        
        while(l1 || l2){
            
            int tmp = (l1?l1->val:0) + (l2?l2->val:0) + carry;
            if(tmp >= 10){
                carry = 1;
                tmp %= 10;
            }
            else{
                carry = 0;
            }
            l3->next = new ListNode(tmp);
            l3 = l3->next;
            l1 = l1?l1->next:NULL;
            l2 = l2?l2->next:NULL;
            
        }
        
        
        if(carry){
            l3->next = new ListNode(1);
            l3 = l3->next;
        }
        
        
        return head->next;
        
    }
};