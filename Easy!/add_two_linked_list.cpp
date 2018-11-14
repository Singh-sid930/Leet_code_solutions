/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        struct ListNode* curr = NULL;
        struct ListNode* head = NULL;
        curr  = (struct ListNode*)malloc(sizeof(struct ListNode));
        curr->next = NULL;
        head = curr;
        struct ListNode* p = l1;       
        struct ListNode* q = l2;
        int carry = 0;
        int pv = 0;
        int qv = 0;
        
        while (p!=NULL || q!=NULL || carry != 0)
        {
            pv = 0;
            qv = 0;
            
            if(p!=NULL)
            {
                pv = p->val;
                p=p->next;
                
            }
            
            if(q!=NULL)
            {
                qv = q->val;
                q=q->next;
            }
           
            int sum = carry + pv + qv; 
            carry = sum/10;
            curr->val = sum%10;
            cout<<"h="<<curr->val;
            
                        
            if (p!=NULL || q!=NULL || carry !=0)
            {
            curr->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            curr = curr->next;
            curr->next = NULL;
            }
            
        }           
        return head;
        
    }
};