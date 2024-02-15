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
    ListNode * reverse(ListNode *head){
        ListNode * p = NULL, *q = NULL , *r = head;

        while(r!= NULL){
            p = q;
            q = r;
            r = r->next;
            q->next = p;
        }
        head = q;
        return head;
    }

    ListNode* removeNodes(ListNode* head) {
        if(head == NULL){
            return NULL;
        }

        head = reverse(head);

        ListNode *curr = head , *prev = NULL;
        int data = curr->val;

        while(curr != NULL){    
            if(curr->val < data){
                prev->next = curr->next;
                curr = curr->next;
            }
            else{
                data = max(data,curr->val);
                prev = curr;
                curr = curr->next;
            }
        }

        head = reverse(head);
        return head;
    }
};