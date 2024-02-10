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
    ListNode* removeElements(ListNode* head, int val) 
    {
        ListNode* hold = new ListNode(-1);
        hold->next=head;
        ListNode* slow = hold;
        ListNode* fast=head;
        while(fast!=NULL)
        {
            if(fast->val==val)
            {
                ListNode *deleteNode = fast;
                slow->next=fast->next;
                fast=fast->next;
                delete(deleteNode);
            }
            else
            {
                slow=fast;
                fast=fast->next;
            }
        }
        return hold->next;
    }
};